#include <cstdio>
#include <cmath>

using namespace std;

double dist(double a, double b, double c, double d)
{
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

int main()
{
    double a, b, c, d;
    scanf ("%lf %lf %lf %lf ", &a, &b, &c, &d);
    printf ("%.4lf\n", dist(a,b,c,d));
    return 0;
}
