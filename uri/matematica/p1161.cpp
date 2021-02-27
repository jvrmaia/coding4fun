#include <cstdio>

using namespace std;

unsigned long long fat(unsigned long long a) {
    if (a == 0) return 1;
    unsigned long long b = 1;
    while (a != 1) {
        b *= a--;
    }
    return b;
}

int main()
{
    unsigned long long a, b;
    while (!feof(stdin)) {
        scanf ("%llu %llu ", &a, &b);
        printf ("%llu\n", fat(a) + fat(b));
    }
    return 0;
}
