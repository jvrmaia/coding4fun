#include <cstdio>

using namespace std;

int main()
{
    long long int a, b;
    while (!feof(stdin)) {
        scanf ("%lld %lld ", &a, &b);
        printf ("%lld\n", (a-b>0) ? a-b : b-a);
    }
    return 0;
}
