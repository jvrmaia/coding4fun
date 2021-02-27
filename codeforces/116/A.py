n = int(raw_input())

max = -1
min = 9999
train = 0
while True:
    try:
        a, b = [int(i) for i in raw_input().split(" ")]
        train += (b - a)
        if train > max:
            max = train
        if train < min:
            min = train
    except:
        break

print max
