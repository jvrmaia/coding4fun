#include <cstdio>

using namespace std;

int main()
{
    long int a = 0, b = 1, n;
    scanf ("%ld ", &n);
    if (n == 1)
        printf ("0\n");
    else {
        printf ("0 ");
        for (int i = 0; i < n - 2; i++) {
            printf ("%ld ", b);
            int tmp = a;
            a = b;
            b += tmp;
        }
        printf ("%ld\n", b);
    }
    return 0;
}
