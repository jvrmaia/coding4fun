#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double i, f, x, y;
    while (!feof(stdin)) {
        scanf ("%lf %lf ", &x, &y);
        f = modf(x, &i);
        if (f > y)
            printf ("%d\n", (int)ceil(x));
        else
            printf ("%d\n", (int)floor(x));
    }
    return 0;
}
