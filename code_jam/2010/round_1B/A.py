T = int(raw_input())

def count_makes(path1, path2):
    ret = len(path2)
    for (i, j) in zip(path1, path2):
        if i == j:
            ret -= 1
        else:
            break
    return ret

for test in xrange(1, T + 1):
    N, M = [int(i) for i in raw_input().split(" ")]
    dir_tree = []
    for i in xrange(0, N):
        path = raw_input()
        dir_tree.append(path.split("/"))
    count = 0
    for i in xrange(0, M):
        path = raw_input().split("/")
        aux = len(path) - 1
        for j in dir_tree:
            aux2 = count_makes(j, path)
            if aux > aux2:
                aux = aux2
        count += aux
        dir_tree.append(path)

    print "Case #%d: %d" % (test, count)

