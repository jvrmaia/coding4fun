#include <cstdio>

using namespace std;

int f(int a, int b) {
    int acc = 0;
    for (int i = a; i <= b; i++) {
        printf ("%d ", i);
        acc += i;
    }
    return acc;
}

int main()
{
    int a, b;
    while (1) {
        scanf ("%d %d ", &a, &b);
        if (a == 0 || b == 0) break;
        if (b > a)
            printf ("Sum=%d\n", f(a,b));
        else
            printf ("Sum=%d\n", f(b,a));
    }
    return 0;
}
