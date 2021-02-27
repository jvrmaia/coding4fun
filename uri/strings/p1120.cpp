#include <cstdio>

using namespace std;

int main()
{
    int d;

    for (;;) {
        d = getchar();
        if (d == '0') break;

        int first = 1;

        getchar();
        for (;;) {
            int n = getchar();
            if (n == EOF || n == '\n') break;
            if (n == d) continue;
            if (n == '0' && first) continue;

            putchar(n);
            first = 0;
        }
        if (first) putchar('0');
        putchar('\n');
    }

    return 0;
}
