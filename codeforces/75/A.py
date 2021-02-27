num1 = raw_input()
num2 = raw_input()

sum1 = int(num1) + int(num2)

num11 = "".join([i for i in num1 if i != '0'])
num22 = "".join([i for i in num2 if i != '0'])

sum2 = int(num11) + int(num22)

a = "".join([i for i in str(sum1) if i != '0'])
b = str(sum2)

if a == b:
    print "YES"
else:
    print "NO"
