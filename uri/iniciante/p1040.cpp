#include <cstdio>

using namespace std;

int main()
{
    double a, b, c, d, e, media;
    scanf ("%lf %lf %lf %lf ", &a, &b, &c, &d);
    media = (2 * a + 3 * b + 4 * c + d) / 10;
    printf ("Media: %.1lf\n", media);
    if (media >= 7) {
        printf ("Aluno aprovado.\n");
    }
    if (media < 5) {
        printf ("Aluno reprovado.\n");
    }
    if (media >= 5 && media <= 6.9) {
        printf ("Aluno em exame.\n");
        scanf ("%lf ", &e);
        printf ("Nota do exame: %.1lf\n", e);
        media = (media + e) / 2;
        if (media > 5) {
            printf ("Aluno aprovado.\n");
        }
        else {
            printf ("Aluno reprovado.\n");
        }
        printf ("Media final: %.1lf\n", media);
    }
    return 0;
}
