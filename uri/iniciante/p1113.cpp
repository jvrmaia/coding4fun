#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    while (1) {
        scanf ("%d %d ", &a, &b);
        if (a == b) break;
        if (b > a)
            printf ("Crescente\n");
        else
            printf ("Decrescente\n");
    }
    return 0;
}
