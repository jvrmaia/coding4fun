#include <cstdio>

using namespace std;

int main()
{
    int n, acc = 0, cnt = 0;
    while (1) {
        scanf ("%d ", &n);
        if (n < 0) break;
        cnt++;
        acc += n;
    }
    printf ("%.2lf\n", (double)acc/(double)cnt);
    return 0;
}
