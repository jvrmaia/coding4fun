#include <cstdio>

using namespace std;

int main()
{
    int n;
    double a, b, c;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%lf %lf %lf ", &a, &b, &c);
        printf ("%.1lf\n", (2 * a + 3 * b + 5 * c) / 10);
    }
    return 0;
}
