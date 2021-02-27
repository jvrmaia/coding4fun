#include <cstdio>

using namespace std;

int main()
{
    int a;
    scanf ("%d ", &a);
    if (a % 2 == 0) a++;
    for (int i = 0; i < 6; i++) {
        printf ("%d\n", a);
        a += 2;
    }
    return 0;
}
