#include <cstdio>

using namespace std;

int main()
{
    int i = 1, j = 7, cnt = 0, lj = 7;
    while (j > 0) {
        printf ("I=%d J=%d\n", i, j);
        if (i == 9 && j == 13) break;
        cnt++;
        if (cnt == 3) {
            cnt = 0;
            i += 2;
            j = lj + 2;
            lj = j;
        }
        else
            j--;
    }
    return 0;
}
