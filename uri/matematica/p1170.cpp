#include <cstdio>

using namespace std;

int main()
{
    int n, dias;
    float a, b;
    scanf ("%d ", &n);
    for (int i = 0; i < n; i++) {
        scanf ("%f ", &a);
        dias = 0;
        b = 1;
        while (b < a) {
            b *= 2;
            dias++;
        }
        printf ("%d dias\n", dias);
    }
    return 0;
}
