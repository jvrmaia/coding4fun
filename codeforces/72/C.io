n := File standardInput readLine asNumber

a := 0
b := 0

for(i, 1, n,
    if(n%i == 0, if(i%2 == 1, a = a + 1, b = b + 1))
)


if (a == b, "yes" println, "no" println)
