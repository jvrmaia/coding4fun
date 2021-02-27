#include <cstdio>

using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
int min(int a, int b) { return (a < b) ? a : b; }

int main()
{
    int a, b;
    scanf ("%d %d ", &a, &b);
    for (int i = min(a,b)+1; i < max(a,b); i++) {
        if (i % 5 == 2 || i % 5 == 3)
            printf ("%d\n", i);
    }
    return 0;
}
