#include <cstdio>
#include <climits>

using namespace std;

int main()
{
    int n, a, min = INT_MAX, min_pos;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%d ", &a);
        if (a < min) {
            min = a;
            min_pos = i;
        }
    }
    printf ("Menor valor: %d\nPosicao: %d\n", min, min_pos);
    return 0;
}
