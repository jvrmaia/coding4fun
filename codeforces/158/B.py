n = int(raw_input())
grupos = [int(i) for i in raw_input().split(' ')]

g1 = g2 = g3 = g4 = 0

for i in grupos:
    if i == 1:
        g1 += 1
    elif i == 2:
        g2 += 1
    elif i == 3:
        g3 += 1
    else:
        g4 += 1

taxis = g3 + g4 + g2 / 2

if g3 > g1:
    g1 = 0
else:
    g1 -= g3

if g2 % 2 == 0:
    g2 = 0
else:
    taxis += 1
    if g1 > 2:
        g1 -= 2
    else:
        g1 = 0

if g1 > 0:
    if g1 % 4 == 0:
        taxis += g1 / 4
    else:
        div = g1 / 4
        resto = g1 - div * 4

        taxis += div + 1

print taxis
