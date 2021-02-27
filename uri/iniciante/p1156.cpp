#include <cstdio>

using namespace std;

int main()
{
    int i;
    double ans = 0;
    for (int i = 1, j = 1; i <= 39; i += 2, j *= 2) ans += (double)i/(double)j;
    printf ("%.2lf\n", ans);
    return 0;
}
