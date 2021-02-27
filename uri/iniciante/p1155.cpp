#include <cstdio>

using namespace std;

int main()
{
    int i;
    double ans = 0;
    for (int i = 1; i <= 100; i++) ans += 1/(double)i;
    printf ("%.2lf\n", ans);
    return 0;
}
