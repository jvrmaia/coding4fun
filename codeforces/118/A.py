entrada = raw_input().lower()

consoantes = []
vogais = 0

for i in entrada:
    if i == 'a' or i == 'e' or i == 'i' or i == 'o' or i == 'u' or i == 'y':
        vogais += 1
    else:
        consoantes.append(i)


if len(consoantes) == 0:
    print '.'
else:
    saida = ".".join(consoantes)
    print "." + saida
