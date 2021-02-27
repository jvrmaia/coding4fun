#include <cstdio>

using namespace std;

int main()
{
    float I[] = {0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8, 2}, J[] = {1, 2, 3};
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 || i == 5 || i == 10)
                printf ("I=%d J=%d\n", (int)I[i], (int)I[i]+(int)J[j]);
            else
                printf ("I=%.1f J=%.1f\n", I[i], I[i]+J[j]);
        }
    }
    return 0;
}
