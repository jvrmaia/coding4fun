p1, p2, p3, p4, a, b = [int(i) for i in raw_input().split(' ')]

ans = 0
for i in range(a, b+1):
    if i == ((((i%p1)%p2)%p3)%p4):
        ans += 1

print ans
