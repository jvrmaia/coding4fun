n = int(raw_input())

for i in xrange(1, n + 1):
    m = int(raw_input())
    l1 = [int(j) for j in raw_input().split(" ")]
    l2 = [int(j) for j in raw_input().split(" ")]

    l1.sort()
    l2.sort()

    sum = 0
    for (j, k) in zip(l1, l2[::-1]):
        sum += j * k

    print "Case #%d: %d" % (i, sum)
