#include <cstdio>

using namespace std;

int main()
{
    int a, b, acc = 0;
    scanf ("%d %d ", &a, &b);
    if (b <= 0) {
        while (1) {
            scanf ("%d ", &b);
            if (b > 0) break;
        }
    }
    for (int i = a; i < a+b; i++) {
        acc += i;
    }
    printf ("%d\n", acc);
    return 0;
}
