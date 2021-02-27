#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, d;
    while (1) {
        scanf ("%d %d %d %d ", &a, &b, &c, &d);
        if (!a && !b && !c && !d) break;

        if (2 * c > a || 2 * c > b) {
            printf ("N\n");
            continue;
        }
        if (2 * d > a || 2 * d > b) {
            printf ("N\n");
            continue;
        }
        if (2 * d + 2 * c <= a && (2 * d <= b || 2 * c <= b)) {
            printf ("S\n");
            continue;
        }
        else if (2 * d + 2 * c <= b && (2 * d <= a || 2 * c <= a)) {
            printf ("S\n");
            continue;
        }
        else {
            int x = b - c -d, y = a - c - d;
            if (x * x + y * y < (c + d) * (c + d)) {
                printf ("N\n");
                continue;
            }
        }
        printf ("S\n");
    }
    return 0;
}
