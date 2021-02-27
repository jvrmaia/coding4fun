#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a, ano, meses;
    scanf ("%d ", &a);
    ano = a / 365;
    a -= a/365 * 365;
    meses = a / 30;
    a -= a/30 * 30;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, meses, a);
    return 0;
}
