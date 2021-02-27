#include <cstdio>
#include <cstdlib>

using namespace std;

int elems[10001];

int cmp(const void * a, const void * b)
{
      return ( *(int*)a - *(int*)b );
}

int main()
{
    int n, m, x, pos, kase = 1;
    while (1) {
        scanf ("%d %d ", &n, &m);
        if (!n && !m) break;

        for (int i = 0; i < n; i++)
            scanf ("%d ", &elems[i]);

        qsort (elems, n, sizeof(int), cmp);

        printf ("CASE# %d:\n", kase);
        for (int i = 0; i < m; i++) {
            scanf ("%d ", &x);
            pos = -1;
            for (int j = 0; j < n; j++) {
                if (elems[j] == x) {
                    pos = j;
                    break;
                }
                else if (elems[j] > x) {
                    break;
                }
            }
            if (pos == -1) {
                printf ("%d not found\n", x);
            }
            else {
                printf ("%d found at %d\n", x, pos + 1);
            }
        }
        kase++;
    }
    return 0;
}
