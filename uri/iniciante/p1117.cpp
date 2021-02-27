#include <cstdio>

using namespace std;

int main()
{
    int a = 0;
    double nota, media = 0;
    while (1) {
        scanf ("%lf ", &nota);
        if (nota >= 0 && nota <= 10) {
            media += nota;
            a++;
        }
        else
            printf ("nota invalida\n");

        if (a == 2) break;
    }
    printf ("media = %.2lf\n", media / 2);
    return 0;
}
