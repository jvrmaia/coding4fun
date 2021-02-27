#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    double c;
    scanf ("%d %d %lf ", &a, &b, &c);
    printf ("NUMBER = %d\n", a);
    printf ("SALARY = U$ %.2lf\n", b * c);
    return 0;
}
