#include <cstdio>

using namespace std;

int max(int a, int b) { return (a>b) ? a : b; }
int min(int a, int b) { return (a<b) ? a : b; }

int main()
{
    int acc = 0, x, y;
    scanf ("%d %d ", &x, &y);
    for (int i = min(x,y); i <= max(x,y); i++) {
        if (i % 13 != 0)
            acc += i;
    }
    printf ("%d\n", acc);
    return 0;
}
