#include <cstdio>

using namespace std;

int main()
{
    unsigned int a, b;
    while (!feof(stdin)) {
        scanf ("%u %u ", &a, &b);
        printf ("%u\n", a ^ b);
    }
    return 0;
}
