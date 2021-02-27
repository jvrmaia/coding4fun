mod = 1000003
n = int(raw_input())
ans = 1
for i in range(1, n):
    ans = (ans * 3) % mod

print ans
