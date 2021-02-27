fib := method(n,
    if(n == 0 or n == 1, return 1, return fib (n-1) + fib (n-2))
)

n := File standardInput readLine asNumber

fib(n) println
