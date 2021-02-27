#include <cstdio>
#include <cstdlib>

int cmp(const void *a, const void *b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    int t[3];
    scanf ("%d %d %d ", &t[0], &t[1], &t[2]);
    qsort(t, 3, sizeof(int), cmp);
    if (t[0] > t[1] + t[2])
        printf ("NAO FORMA TRIANGULO\n");
    if (t[0] * t[0] == t[1] * t[1] + t[2] * t[2])
        printf ("TRIANGULO RETANGULO\n");
    if (t[0] * t[0] > t[1] * t[1] + t[2] * t[2])
        printf ("TRIANGULO OBTUSANGULO\n");
    if (t[0] * t[0] < t[1] * t[1] + t[2] * t[2])
        printf ("TRIANGULO ACUTANGULO\n");
    if (t[0] == t[1] && t[1] == t[2])
        printf ("TRIANGULO EQUILATERO\n");
    if (t[0] == t[1] && t[1] != t[2] || t[0] != t[1] && t[1] == t[2])
        printf ("TRIANGULO ISOSCELES\n");
    return 0;
}
