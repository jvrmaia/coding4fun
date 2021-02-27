#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int pot10(int x) {
    int i = 1, ret = 1;
    for (int i = 0; i < x; i++)
        ret *= 10;
    return ret;
}

int main()
{
    int n;
    long long int a, b;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%lld %lld ", &a, &b);
        if (b > a)
            printf ("nao encaixa\n");
        else if (a == b)
            printf ("encaixa\n");
        else {
            char n[100];
            sprintf (n, "%lld", b);
            a = a % pot10(strlen(n));

            if (a - b == 0)
                printf ("encaixa\n");
            else
                printf ("nao encaixa\n");
        }
    }
    return 0;
}
