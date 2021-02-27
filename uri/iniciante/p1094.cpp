#include <cstdio>

using namespace std;

int main()
{
    int n, qt, C, R, S;
    char c;
    C = R = S = 0;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d %c ", &qt, &c);
        if (c == 'C') C += qt;
        if (c == 'R') R += qt;
        if (c == 'S') S += qt;
    }
    printf ("Total: %d cobaias\n", R + C + S);
    printf ("Total de coelhos: %d\n", C);
    printf ("Total de ratos: %d\n", R);
    printf ("Total de sapos: %d\n", S);
    printf ("Percentual de coelhos: %.2lf %%\n", 100 * (double)C / (C + R + S));
    printf ("Percentual de ratos: %.2lf %%\n", 100 * (double)R / (C + R + S));
    printf ("Percentual de sapos: %.2lf %%\n", 100 * (double)S / (C + R + S));
    return 0;
}
