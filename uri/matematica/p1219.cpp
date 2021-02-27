#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double x, y, z, pi = 3.1415926535897, t_area, c_area, C_area, p, P, r, R;
    while (!feof(stdin)) {
        scanf ("%lf %lf %lf ", &x, &y, &z);

        P = x + y + z;
        p = P / 2;
        t_area = sqrt(p * (p - x) * (p - y) * (p - z));

        r = 2 * t_area / P;
        c_area = pi * r * r;

        R = (x * y * z) / sqrt((x+z+y) * (x+y-z) * (x-y+z) * (-x+z+y));
        C_area = pi * R * R;

        printf ("%.4lf %.4lf %.4lf\n", C_area - t_area, t_area - c_area, c_area);
    }
    return 0;
}
