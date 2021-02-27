#include <cstdio>

using namespace std;

int main()
{
    int l;
    double a, acc = 0;
    char c;
    scanf ("%d %c ", &l, &c);
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf ("%lf ", &a);
            if (i == l)
                acc += a;
        }
    }
    if (c == 'S')
        printf ("%.1lf\n", acc);
    else
        printf ("%.1lf\n", acc / 12);
    return 0;
}
