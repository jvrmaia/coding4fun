#include <cstdio>

using namespace std;

int main()
{
    double a, b = 0;
    scanf ("%lf ", &a);
    if (a <= 2000)
        printf ("Isento\n");
    else {
        if (a > 2000 && a <= 3000) {
            a -= 2000;
            b = a * 0.08;
        }
        else if (a > 3000 && a <= 4500) {
            a -= 3000;
            b = a * 0.18 + 1000 * 0.08;
        }
        else {
            a -= 4500;
            b = a * 0.28 + 1000 * 0.08 + 1500 * 0.18;
        }
        printf ("R$ %.2lf\n", b);
    }
    return 0;
}
