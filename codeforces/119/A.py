def gcd(p, q):
    if q == 0:
        return p
    else:
        return gcd(q, p % q)

a, b, n = [int(i) for i in raw_input().split(" ")]

turn = 0
while n > 0:
    if turn == 0:
        x = gcd(a, n)
        n -= x
        turn = 1
        winner = 0
    else:
        x = gcd(b, n)
        n -= x
        turn = 0
        winner = 1

print winner
