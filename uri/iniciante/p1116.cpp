#include <cstdio>

using namespace std;

int main()
{
    int x, y, n;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d %d ", &x, &y);
        if (y == 0) printf ("divisao impossivel\n");
        else printf ("%.1f\n", (float)x/(float)y);
    }
    return 0;
}
