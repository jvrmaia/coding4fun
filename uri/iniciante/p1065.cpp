#include <cstdio>

using namespace std;

int main()
{
    int a, p = 0;
    for (int i = 0; i < 5; i++) {
        scanf ("%d ", &a);
        if (a % 2 == 0) p++;
    }
    printf ("%d valores pares\n", p);
    return 0;
}
