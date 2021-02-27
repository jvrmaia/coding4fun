#include <cstdio>

using namespace std;

int main()
{
    int a, b, c, d;
    scanf ("%d %d %d %d ", &a, &b, &c, &d);
    if (a == c && b == d) {
        printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }
    if (b > d) {
        d += 60;
        c--;
    }
    if (a > c) {
        printf ("O JOGO DUROU %d HORA(S) E ", 24 - a + c);
    }
    else {
        printf ("O JOGO DUROU %d HORA(S) E ", c - a);
    }
    if (b > d) {
        printf ("%d MINUTO(S)\n", 60 - b + d);
    }
    else {
        printf ("%d MINUTO(S)\n", d - b);
    }
    return 0;
}
