T = int(raw_input())

def to_bin(n):
    bStr = ''
    if n == 0: return '0'
    while n > 0:
        bStr = str(n % 2) + bStr
        n = n >> 1
    return bStr

def add(a, b):
    if len(a) > len(b):
        b = (len(a)-len(b))*"0" + b
    else:
        a = (len(b)-len(a))*"0" + a
    ans = ""
    for i in range(0, len(a)):
        if a[i] == b[i]:
            if ans != "":
                ans += "0"
        else:
            ans += "1"
    return ans

def query(data, start, end):
    ans = data[start]
    for i in data[start+1:end]:
        ans = add(ans, i)
    return ans

for k in range(1, T+1):
    N = int(raw_input())
    print "Case #%d:" % (k),
    candys_int = [int(i) for i in raw_input().split(' ')]
    candys_int.sort()
    candys_bin = [to_bin(i) for i in candys_int]
    for i in range(1, N):
        left = query(candys_bin, 0, i)
        right = query(candys_bin, i, N)
        if left == right:
            p1 = 0
            p2 = 0
            for j in candys_int[0:i]: p1 += j
            for j in candys_int[i:N]: p2 += j
            if p1 > p2: print p1
            else: print p2
            break
        else:
            print "NO"
            break

