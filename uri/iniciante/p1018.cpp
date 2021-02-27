#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a;
    scanf ("%d ", &a);
    printf ("%d\n", a);
    printf ("%d nota(s) de R$ 100,00\n", a / 100);
    a -= a/100 * 100;
    printf ("%d nota(s) de R$ 50,00\n", a / 50);
    a -= a/50 * 50;
    printf ("%d nota(s) de R$ 20,00\n", a / 20);
    a -= a/20 * 20;
    printf ("%d nota(s) de R$ 10,00\n", a / 10);
    a -= a/10 * 10;
    printf ("%d nota(s) de R$ 5,00\n", a / 5);
    a -= a/5 * 5;
    printf ("%d nota(s) de R$ 2,00\n", a / 2);
    a -= a/2 * 2;
    printf ("%d nota(s) de R$ 1,00\n", a / 1);
    return 0;
}
