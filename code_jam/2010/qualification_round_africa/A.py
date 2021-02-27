n = int(raw_input())

for i in xrange(1, n + 1):
    C = int(raw_input())
    m = int(raw_input())
    l = [int(j) for j in raw_input().split(" ")]
    for k1, kv1 in enumerate(l):
        for k2, kv2 in enumerate(l[k1+1:]):
            if kv1 + kv2 == C:
                pos1 = k1 + 1
                pos2 = pos1 + k2 + 1
                break
    print "Case #%d: %d %d" % (i, pos1, pos2)
