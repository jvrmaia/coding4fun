#include <cstdio>

using namespace std;

int perfect(int x) {
    int acc = 0;
    for (int i = 1; i < x; i++)
        if (x % i == 0)
            acc += i;
    return acc == x;
}

int main()
{
    int n, a;
    scanf ("%d ", &n);
    while(n--) {
        scanf("%d ", &a);
        if (perfect(a))
            printf ("%d eh perfeito\n", a);
        else
            printf ("%d nao eh perfeito\n", a);
    }
    return 0;
}
