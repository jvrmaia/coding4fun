T = int(raw_input())

def intersect(a, b, c, d):
    if a > c and d > b:
        return True
    if a < c and d < b:
        return True
    return False

for test in xrange(1, T + 1):
    N = int(raw_input())
    wires = []
    ans = 0
    for i in range(0, N):
        a, b = [int(i) for i in raw_input().split(" ")]
        for (c,d) in wires:
            if intersect(a, b, c, d):
                ans += 1
        wires.append((a,b))
    print "Case #%d: %d" % (test, ans)
