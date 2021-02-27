a, b = [int(i) for i in raw_input().split(' ')]
l =  [int(i) for i in raw_input().split(' ')]
score = l[b - 1]
winners = 0
for i in l:
    if i >= score and i > 0:
        winners += 1

print winners
