#include <cstdio>

using namespace std;

int main()
{
    int n;
    char c;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        int ans = 0;
        while (1) {
            c = getchar();
            if (c == '\n') break;
            switch (c) {
                case '0': ans += 6; break;
                case '1': ans += 2; break;
                case '2': ans += 5; break;
                case '3': ans += 5; break;
                case '4': ans += 4; break;
                case '5': ans += 5; break;
                case '6': ans += 6; break;
                case '7': ans += 3; break;
                case '8': ans += 7; break;
                case '9': ans += 6; break;
            }
        }
        printf ("%d leds\n", ans);
    }
    return 0;
}
