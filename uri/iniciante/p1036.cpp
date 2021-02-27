#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    scanf ("%lf %lf %lf ", &a, &b, &c);
    if (b*b - 4 *a*c >= 0)
        printf ("R1 = %.5lf\nR2 = %.5lf\n", (-b + sqrt(b*b - 4*a*c))/(2*a), (-b - sqrt(b*b - 4*a*c))/(2*a));
    else
        printf ("Impossivel calcular\n");
    return 0;
}
