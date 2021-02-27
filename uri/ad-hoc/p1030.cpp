#include <cstdio>

using namespace std;

int josephus(int n, int k) {
    if (n == 1)
        return 1;
    else
        return ((josephus(n - 1, k) + k - 1) % n) + 1;
}

int main()
{
    int t, a, b;
    scanf ("%d ", &t);
    for (int kase = 1; kase <= t; kase++) {
        scanf ("%d %d ", &a, &b);
        printf ("Case %d: %d\n", kase, josephus(a, b));
    }
    return 0;
}
