#include <cstdio>

using namespace std;

typedef struct _Point {
    int x, y;
} Point;

int main()
{
    int T, N, b_count;
    char square[21][21];
    bool ok;
    Point tl, tr, bl, br;

    scanf ("%d ", &T);

    for (int test = 1; test <= T; test++) {
        scanf ("%d ", &N);

        ok = true;
        b_count = 0;
        tl.x = tl.y = tr.x = tr.y = bl.x = bl.y = br.x = br.y = -1;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf ("%c", &square[i][j]);
                if (square[i][j] == '#') {
                    b_count++;

                    if (tl.y == -1) {
                        tl.x = tr.x = bl.x = br.x = j;
                        tl.y = tr.y = bl.y = br.y = i;
                    } else if (i == tl.y || i == tr.y) {
                        if (j > tr.x) tr.x = j;
                        if (br.y == i) br.x = j;
                    } else if (i > tl.y) {
                        if (j < tl.x || j > tr.x) ok = false;
                        if (j == tl.x) bl.y = i;
                        if (j == tr.x) br.y = i;
                    }
                }
            }
            getchar();
        }

        if ((bl.y - tl.y) != (tr.x - tl.x)) ok = false;
        if ((bl.y - tl.y + 1) * (tr.x - tl.x + 1) != b_count) ok = false;
        if (tl.x != bl.x) ok = false;
        if (tl.y != tr.y) ok = false;
        if (bl.y != br.y) ok = false;
        if (tr.x != br.x) ok = false;
        if (b_count == 0) ok = false;

        printf ("Case #%d: %s\n", test, ((ok) ? "YES" : "NO"));
    }
    return 0;
}
