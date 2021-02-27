#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    while (!feof(stdin)) {
        scanf ("%d %d ", &a, &b);
        printf ("%d\n", 2*a*b);
    }
    return 0;
}
