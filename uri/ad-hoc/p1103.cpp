#include <cstdio>

using namespace std;

int main()
{
    int a, b, c, d;
    while (1) {
        scanf ("%d %d %d %d ", &a, &b, &c, &d);
        if (!a && !b && !c && !d) break;
        int tempo = 0;
        if (a == c) {
            if (b > d)
                tempo += 1380 + 60 - b + d;
            else
                tempo += d - b;
        }
        else {
            if (a > c) {
                tempo += 24 - a + c;
                tempo *= 60;
                tempo += d - b;
            }
            else {
                tempo += c - a;
                tempo *= 60;
                tempo += d - b;
            }
        }
        printf ("%d\n", tempo);
    }
    return 0;
}
