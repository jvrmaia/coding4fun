#include <cstdio>

using namespace std;

int main()
{
    int i, a;
    for (int i = 0; i < 10; i++) {
        scanf ("%d ", &a);
        printf ("X[%d] = %d\n", i, (a > 0) ? a : 1);
    }
    return 0;
}
