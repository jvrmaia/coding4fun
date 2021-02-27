#include <cstdio>

using namespace std;

int main()
{
    int s;
    while (1) {
        scanf ("%d ", &s);
        if (s == 2002) {
            printf ("Acesso Permitido\n");
            break;
        }
        else
            printf ("Senha Invalida\n");
    }
    return 0;
}
