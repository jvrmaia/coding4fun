#include <cstdio>

using namespace std;

int main()
{
    int n, a, b, acc = 0, cnt = 0;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d %d ", &a, &b);
        acc = cnt = 0;
        if (a % 2 == 0) a++;
        for (int j = a; cnt < b; j += 2, cnt++, acc += j - 2);
        printf ("%d\n", acc);
    }
    return 0;
}
