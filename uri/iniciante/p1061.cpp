#include <cstdio>

using namespace std;

int main()
{
    int d1, h1, m1, s1, d2, h2, m2, s2;
    scanf ("Dia %d %d : %d : %d ", &d1, &h1, &m1, &s1);
    scanf ("Dia %d %d : %d : %d ", &d2, &h2, &m2, &s2);
    if (h1 == h2 && m1 == m2 && s1 == s2) {
        printf ("%d dia(s)\n0 hora(s)\n0 minuto(s)\n0 segundo(s)\n", d2 - d1);
    }
    else {
        int dias = d2 - d1, horas, minutos, segundos;
        if (h1 > h2) {
            dias--;
            h2 += 24;
        }
        horas = h2 - h1;
        if (m1 > m2) {
            horas--;
            m2 += 60;
        }
        minutos = m2 - m1;
        if (s1 > s2) {
            minutos--;
            s2 += 60;
        }
        segundos = s2 - s1;
        printf ("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segundos);
    }
    return 0;
}
