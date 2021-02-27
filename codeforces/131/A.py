a = raw_input()

first = False
count = 0
for i, c in enumerate(a):
    if c >= 'a' and c <= 'z':
        if i == 0:
            first = True
    if c >= 'A' and c <= 'Z':
        count += 1

if count == len(a):
    print a.lower()
elif count + 1 == len(a) and first:
    print "%s%s" % (a[0].upper(), a[1:].lower())
else:
    print a
