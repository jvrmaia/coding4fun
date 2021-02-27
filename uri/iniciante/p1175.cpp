#include <cstdio>

using namespace std;

int main()
{
    int i, v[20];
    for (int i = 0; i < 20; i++) {
        scanf ("%d ", &v[20 - i - 1]);
    }
    for (int i = 0; i < 20; i++) {
        printf ("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}
