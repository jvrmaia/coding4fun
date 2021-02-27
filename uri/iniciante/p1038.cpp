#include <cstdio>

using namespace std;

int main()
{
    double table[] = {4.0, 4.5, 5.0, 2.0, 1.5};
    int a, b;
    scanf ("%d %d ", &a, &b);
    printf ("Total: R$ %.2lf\n", table[a - 1] * b);
    return 0;
}
