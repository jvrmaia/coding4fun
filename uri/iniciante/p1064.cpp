#include <cstdio>

using namespace std;

int main()
{
    double a, acc = 0;
    int b = 0;
    for (int i = 0; i < 6; i++) {
        scanf ("%lf ", &a);
        if (a > 0) {
            acc += a;
            b++;
        }
    }
    printf ("%d valores positivos\n%.1lf\n", b, acc / b);
    return 0;
}
