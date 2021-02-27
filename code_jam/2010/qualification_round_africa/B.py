n = int(raw_input())

for i in xrange(1, n + 1):
    phrase = raw_input().split(" ")
    print "Case #%d: %s" % (i, " ".join(phrase[::-1]))

