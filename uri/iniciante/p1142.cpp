#include <cstdio>

using namespace std;

int main()
{
    int n, a = 0;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 4; j++) {
            a++;
            printf ("%d ", a);
        }
        a++;
        printf ("PUM\n");
    }
    return 0;
}
