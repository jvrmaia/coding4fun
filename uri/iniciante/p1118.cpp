#include <cstdio>

using namespace std;

int main()
{
    int a = 0, b;
    double nota, media = 0;
    while (1) {
        scanf ("%lf ", &nota);
        if (nota >= 0 && nota <= 10) {
            media += nota;
            a++;
        }
        else
            printf ("nota invalida\n");

        if (a == 2) {
            printf ("media = %.2lf\n", media / 2);
            while (1) {
                printf ("novo calculo (1-sim 2-nao)\n");
                scanf ("%d", &b);
                if (b == 2)
                    return 0;
                if (b == 1)
                    break;
            }
            a = 0;
            media = 0;
        }
    }
    return 0;
}
