#include <cstdio>

using namespace std;

int main()
{
    int a, b, j = 1;
    scanf ("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        if (j == a) {
            printf ("%d\n", i);
            j = 0;
        }
        else
            printf ("%d ", i);
        j++;
    }
    return 0;
}
