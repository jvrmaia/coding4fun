#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int d, vf, vg;
    double h;
    while (!feof(stdin)) {
        scanf ("%d %d %d ", &d, &vf, &vg);
        h = sqrt(d * d + 144);
        if (h / vg <= 12.0 / vf)
            printf ("S\n");
        else
            printf ("N\n");
    }
    return 0;
}
