#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a;
    scanf ("%lf ", &a);
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", (int)a / 100);
    a -= (int)a/100 * 100;
    printf ("%d nota(s) de R$ 50.00\n", (int)a / 50);
    a -= (int)a/50 * 50;
    printf ("%d nota(s) de R$ 20.00\n", (int)a / 20);
    a -= (int)a/20 * 20;
    printf ("%d nota(s) de R$ 10.00\n", (int)a / 10);
    a -= (int)a/10 * 10;
    printf ("%d nota(s) de R$ 5.00\n", (int)a / 5);
    a -= (int)a/5 * 5;
    printf ("%d nota(s) de R$ 2.00\n", (int)a / 2);
    a -= (int)a/2 * 2;
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n", (int)a / 1);
    a -= (int)a/1;
    a *= 100;
    printf ("%d moeda(s) de R$ 0.50\n", (int)a / 50);
    a -= (int)a/50 * 50;
    printf ("%d moeda(s) de R$ 0.25\n", (int)a / 25);
    a -= (int)a/25 * 25;
    printf ("%d moeda(s) de R$ 0.10\n", (int)a / 10);
    a -= (int)a/10 * 10;
    printf ("%d moeda(s) de R$ 0.05\n", (int)a / 5);
    a -= (int)a/5 * 5;
    printf ("%d moeda(s) de R$ 0.01\n", (int)a);
    return 0;
}
