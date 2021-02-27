T = int(raw_input())

for test in range(1, T + 1):
    N, M = [int(i) for i in raw_input().split()]

    lawn = []
    lines_maxs = [-1 for i in range(N)]
    columns_maxs = [-1 for i in range(M)]
    for i in range(N):
        line = [int(j) for j in raw_input().split()]
        lines_maxs[i] = max(line)
        lawn.append(line)
        for j in range(M):
            columns_maxs[j] = max(columns_maxs[j], line[j])

    ans = "YES"
    for i in range(N):
        for j in range(M):
            if lawn[i][j] < lines_maxs[i] and lawn[i][j] < columns_maxs[j]:
                ans = "NO"

    print "Case #%d: %s" % (test, ans)
