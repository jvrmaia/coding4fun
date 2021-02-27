#include <cstdio>

using namespace std;

int main()
{
    int n, acc = 0, cnt = 0;
    while (1) {
        scanf ("%d ", &n);
        if (!n) break;
        acc = cnt = 0;
        if (!(n % 2 == 0)) n++;
        for (int i = n; cnt < 5; cnt++, i += 2, acc += i - 2);
        printf ("%d\n", acc);
    }
    return 0;
}
