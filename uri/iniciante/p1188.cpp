#include <cstdio>

using namespace std;

int main()
{
    char c;
    double a, acc = 0;
    int cnt = 0;
    c = getchar();
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf ("%lf ", &a);
            if (i > j && i != j && i + j >= 12) {
                acc += a;
                cnt++;
            }
        }
    }
    if (c == 'S')
        printf ("%.1lf\n", acc);
    else
        printf ("%.1lf\n", acc/cnt);
    return 0;
}
