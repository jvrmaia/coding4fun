#include <cstdio>

using namespace std;

int main()
{
    int i = 1, j = 60;
    while (j > 0) {
        printf ("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
    printf ("I=37 J=0\n");
    return 0;
}
