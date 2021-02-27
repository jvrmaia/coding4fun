#include <cstdio>
#include <cmath>

using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, c;
    scanf ("%d %d %d ", &a, &b, &c);
    printf ("%d eh o maior\n", max(a,max(b,c)));
    return 0;
}
