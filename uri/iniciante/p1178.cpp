#include <cstdio>

using namespace std;

int main()
{
    double d;
    scanf ("%lf ", &d);
    for (int i = 0; i < 100; i++) {
        printf ("N[%d] = %.4lf\n", i, d);
        d /= 2;
    }
    return 0;
}
