#include <cstdio>

using namespace std;

int main()
{
    int i, a;
    scanf ("%d ", &a);
    for (int i = 0; i < 10; i++) {
        printf ("N[%d] = %d\n", i, a);
        a *= 2;
    }
    return 0;
}
