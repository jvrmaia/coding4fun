#include <cstdio>

using namespace std;

int main()
{
    int pi, pg, a, vi, vg, e;
    vi = vg = e = 0;
    while (1) {
        scanf ("%d %d ", &pi, &pg);
        if (pi > pg)
            vi++;
        if (pg > pi)
            vg++;
        if (pg == pi)
            e++;
        printf ("Novo grenal (1-sim 2-nao)\n");
        scanf ("%d ", &a);
        if (a == 2) {
            printf ("%d grenais\n", vi + vg + e);
            printf ("Inter:%d\n", vi);
            printf ("Gremio:%d\n", vg);
            printf ("Empates:%d\n", e);
            if (vg > vi)
                printf ("Gremio venceu mais\n");
            if (vi > vg)
                printf ("Inter venceu mais\n");
            if (vi == vg)
                printf ("Nao houve vencedor\n");
            break;
        }
    }
    return 0;
}
