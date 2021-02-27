n = int(raw_input())

solved = 0
while True:
    try:
        a, b, c = [int(i) for i in raw_input().split(" ")]
        if a + b + c > 1:
            solved += 1
    except:
        break

print solved
