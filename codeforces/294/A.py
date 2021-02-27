n = int(raw_input())
a = [0] + [int(i) for i in raw_input().split()]
m = int(raw_input())
for i in range(m):
    x, y = [int(j) for j in raw_input().split()]
    a[x - 1] += y - 1
    try:
        a[x + 1] += a[x] - y
    except:
        a.append(a[x] - y)
    a[x] = 0

for i in a[1:n+1]:
    print i
