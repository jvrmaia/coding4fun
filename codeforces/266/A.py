n = int(raw_input())
line = raw_input()

last = line[0]
remove = 0
for i in range(1,n):
    if line[i] == last:
        remove += 1
    last = line[i]

print remove

