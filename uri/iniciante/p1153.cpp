#include <cstdio>

using namespace std;

int main()
{
    long int n, m = 1;
    scanf ("%ld ", &n);
    while (n != 1) m *= (n--);
    printf ("%ld\n", m);
    return 0;
}
