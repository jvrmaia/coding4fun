#include <cstdio>

using namespace std;

int main()
{
    int a, b, kase = 1;
    while (1) {
        scanf ("%d %d ", &a ,&b);
        if (!a && !b) break;
        if (b >= a)
            printf ("Case %d: 0\n", kase);
        else {
            int cnt = 0;
            while (1) {
                if (cnt * b >= a || cnt > 30)
                    break;
                cnt++;
            }
            if (cnt <= 27)
                printf ("Case %d: %d\n", kase, cnt - 1);
            else
                printf ("Case %d: impossible\n", kase);
        }
        kase++;
    }
    return 0;
}
