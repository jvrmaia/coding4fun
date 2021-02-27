#include <cstdio>

using namespace std;

int f(int a, int b) {
    int acc = 0;
    for (int i = a + 1; i < b; i++) {
        if (i % 2)
            acc += i;
    }
    return acc;
}

int main()
{
    int n, a, b;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d %d ", &a, &b);
        if (b > a)
            printf ("%d\n", f(a,b));
        else
            printf ("%d\n", f(b,a));
    }
    return 0;
}
