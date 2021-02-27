#include <cstdio>

using namespace std;

int main()
{
    int t;
    while (1) {
        scanf ("%d ", &t);
        if (!t) break;
        int x0, y0;
        scanf ("%d %d ", &x0, &y0);
        for (int i = 0; i < t; i++) {
            int x, y;
            scanf ("%d %d ", &x, &y);
            if (x == x0 || y == y0)
                printf ("divisa\n");
            else if (x > x0 && y > y0)
                printf ("NE\n");
            else if (x < x0 && y > y0)
                printf ("NO\n");
            else if (x < x0 && y < y0)
                printf ("SO\n");
            else
                printf ("SE\n");
        }
    }
    return 0;
}
