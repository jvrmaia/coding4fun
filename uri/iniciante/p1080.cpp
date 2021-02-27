#include <cstdio>
#include <climits>

using namespace std;

int main()
{
    int a, max = INT_MIN, pos;
    for (int i = 0; i < 100; i++) {
        scanf ("%d ", &a);
        if (a > max) {
            pos = i + 1;
            max = a;
        }
    }
    printf ("%d\n%d\n", max, pos);
    return 0;
}
