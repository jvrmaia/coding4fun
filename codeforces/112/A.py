a = raw_input().lower()
b = raw_input().lower()

count = 0
for i, c in enumerate(a):
    if c > b[i]:
        count += 1
        break
    elif c < b[i]:
        count -= 1
        break

print count
