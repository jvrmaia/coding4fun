#include <cstdio>

using namespace std;

int main()
{
    int i, a;
    for (int i = 0; i < 100; i++) {
        scanf ("%d ", &a);
        if (a <= 10)
            printf ("A[%d] = %d\n", i, a);
    }
    return 0;
}
