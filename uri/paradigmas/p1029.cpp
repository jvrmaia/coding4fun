#include <cstdio>

using namespace std;

int counter;

int fib(int a) {
    counter++;
    if (a == 0) {
        return 0;
    }
    else if (a == 1) {
        return 1;
    }
    else {
        return fib(a-1) + fib(a-2);
    }
}

int main()
{
    int n, a, x;
    scanf ("%d ", &n);
    while (n--) {
        scanf ("%d ", &a);
        counter = 1;
        x = fib(a);
        printf ("fib(%d) = %d calls = %d\n", a, counter - 2, x);
    }
    return 0;
}
