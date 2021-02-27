#include <cstdio>
#include <cstdlib>

using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main()
{
    int x, y, acc = 0;
    scanf ("%d %d ", &x, &y);
    for (int i = min(x,y) + 1; i < max(x,y); i++) {
        if (abs(i) % 2 == 1)
            acc += i;
    }
    printf ("%d\n", acc);
    return 0;
}
