#include <cstdio>

using namespace std;

int main()
{
    int a, b, c, d;
    while (1) {
        scanf ("%d %d %d %d ", &a, &b, &c, &d);
        if(!a && !b && !c && !d) break;
        if (a == c && b == d)
            printf ("0\n");
        else if (a == c || b == d)
            printf ("1\n");
        else if ((a-c)*(a-c) == (b-d)*(b-d))
            printf ("1\n");
        else
            printf ("2\n");
    }
    return 0;
}
