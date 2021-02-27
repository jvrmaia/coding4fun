#include <cstdio>

using namespace std;

int main()
{
    int a, b, acc = 0, j = 0;
    scanf ("%d %d ", &a, &b);
    if (b < a) {
        while (1) {
            scanf ("%d ", &b);
            if (b >= a) break;
        }
    }
    for (int i = a;; i++) {
        acc += i;
        j++;
        if (acc > b) break;
    }
    printf ("%d\n", j);
    return 0;
}
