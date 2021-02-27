import re

L, D, N = [int(i) for i in raw_input().split(" ")]

words = []
for i in range(0, D):
    words.append(raw_input())


for i in xrange(1, N + 1):
    counter = 0
    pattern = raw_input().replace("(", "[").replace(")", "]")
    for word in words:
        if re.search(pattern, word):
            counter += 1
    print "Case #%d: %d" % (i, counter)

