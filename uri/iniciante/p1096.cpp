#include <cstdio>

using namespace std;

int main()
{
    int i = 1, j = 7, cnt = 0;
    while (j > 0) {
        printf ("I=%d J=%d\n", i, j);
        if (i == 9 && j == 5) break;
        cnt++;
        if (cnt == 3) {
            cnt = 0;
            i += 2;
        }
        j--;
        if (j == 4) j = 7;
    }
    return 0;
}
