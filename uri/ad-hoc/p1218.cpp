#include <cstdio>
#include <map>
#include <utility>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    int n, kase = 1;

    while (!feof(stdin)) {
        scanf ("%d ", &n);

        map<pair<char, int>, int> sapatos;
        map<pair<char, int>, int>::iterator it;
        char *line = NULL, *pch;
        size_t ss;
        getline(&line, &ss, stdin);

        if (strlen(line) == 0) break;

        int tam;
        bool t = true;
        pch = strtok (line, " ");
        while (pch != NULL) {
            if (t) {
                tam = atoi(pch);
                t = false;
            }
            else {
                sapatos[make_pair(pch[0], tam)]++;
                t = true;
            }
            pch = strtok (NULL, " ");
        }

        int f = sapatos[make_pair('F', n)];
        int m = sapatos[make_pair('M', n)];
        if (kase > 1) printf ("\n");
        printf ("Caso %d:\n", kase);
        printf ("Pares Iguais: %d\n", f + m);
        printf ("F: %d\nM: %d\n", f, m);
        kase++;
    }
    return 0;
}
