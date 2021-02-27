#include <cstdio>

using namespace std;

int main()
{
    int N, a, in = 0, out = 0;
    scanf ("%d ", &N);
    for (int i = 0; i < N; i++) {
        scanf ("%d ", &a);
        if (a >= 10 && a <= 20)
            in++;
        else
            out++;
    }
    printf ("%d in\n%d out\n", in, out);
    return 0;
}
