#include <cstdio>

using namespace std;

int main()
{
    unsigned long long fib[61];
    int a, n;
    fib[0] = 0; fib[1] = 1;
    for (int i = 2; i < 61; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf ("%d ", &n);
    while (n--) {
        scanf ("%d ", &a);
        printf ("Fib(%d) = %llu\n", a, fib[a]);
    }
    return 0;
}
