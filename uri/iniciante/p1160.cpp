#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int T, anos;
    long int p1, p2;
    double t1, t2;
    scanf ("%d ", &T);
    for (int t = 0; t < T; t++) {
        scanf ("%ld %ld %lf %lf ", &p1, &p2, &t1, &t2);
        anos = 0;
        while (1) {
            p1 *= (100 + t1)/100;
            p2 *= (100 + t2)/100;
            anos++;
            if (p1 > p2 || anos > 100) break;
        }
        if (anos > 100)
            printf ("Mais de 1 seculo.\n");
        else
            printf ("%d anos.\n", anos);
    }
    return 0;
}
