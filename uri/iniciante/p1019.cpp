#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a, h, m;
    scanf ("%d ", &a);
    h = a / 3600;
    a -= a/3600 * 3600;
    m = a / 60;
    a -= a/60 * 60;
    printf ("%d:%d:%d\n", h, m, a);
    return 0;
}
