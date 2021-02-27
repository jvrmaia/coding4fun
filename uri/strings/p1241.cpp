#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    char a[1001], b[1001];
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%s %s ", a, b);
        int sa = strlen(a), sb = strlen(b);
        if (sb > sa) {
            printf ("nao encaixa\n");
        }
        else if (strcmp(a, b) == 0) {
            printf ("encaixa\n");
        }
        else {
            bool encaixa = true;

            for (int i = sa - sb, j = 0; j < sb; i++, j++) {
                if (a[i] != b[j]) {
                    encaixa = false;
                    break;
                }
            }

            if (encaixa)
                printf ("encaixa\n");
            else
                printf ("nao encaixa\n");
        }
    }
    return 0;
}
