#include <cstdio>

using namespace std;

void print(int a, int b, int c)
{
    if (a <= b && a <= c) {
        printf ("%d\n", a);
        if (b < c) {
            printf ("%d\n%d\n\n", b, c);
        }
        else {
            printf ("%d\n%d\n\n", c, b);
        }
    }
    else
        return print(b, c, a);
}

int main()
{
    int a, b, c;
    scanf ("%d %d %d ", &a, &b, &c);
    print(a, b, c);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
