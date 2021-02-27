#include <cstdio>

using namespace std;

int main()
{
    double a, b;
    int c;
    scanf ("%lf ", &a);
    if (a >= 0 && a <= 400.00) {
        b = a * 0.15;
        c = 15;
    }
    if (a >= 400.01 && a <= 800.00) {
        b = a * 0.12;
        c = 12;
    }
    if (a >= 800.01 && a <= 1200.00) {
        b = a * 0.1;
        c = 10;
    }
    if (a >= 1200.01 && a <= 2000.00) {
        b = a * 0.07;
        c = 7;
    }
    if (a > 2000) {
        b = a * 0.04;
        c = 4;
    }
    printf ("Novo salario: %.2lf\n", a + b);
    printf ("Reajuste ganho: %.2lf\n", b);
    printf ("Em percentual: %d %%\n", c);
    return 0;
}
