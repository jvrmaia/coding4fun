n = int(raw_input())

pts = 0
max = -9999999
winner = ""
for i in range(0, n):
    user, schg, fchg, a, b, c, d, e = [i for i in raw_input().split(' ')]
    total = 100*int(schg) - 50*int(fchg) + int(a) + int(b) + int(c) + int(d) + int(e)
    if total > max:
        max = total
        pts = int(a) + int(b) + int(c) + int(d) + int(e)
        winner = user
    if total == max:
        if int(a)+int(b)+int(c)+int(d)+int(e) > pts:
            winner = user
            pts = int(a)+int(b)+int(c)+int(d)+int(e)

print winner
