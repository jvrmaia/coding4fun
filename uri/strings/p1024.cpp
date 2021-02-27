#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n;
    scanf ("%d ", &n);
    while (n--) {
        char *line = NULL;
        size_t ssize;
        getline(&line, &ssize, stdin);
        int size = strlen(line);
        int middle = ceil(size / 2);
        for (int i = size - 1; i >= 0; i--) {
            if (line[i] >= 'a' && line[i] <= 'z' || line[i] >= 'A' && line[i] <= 'Z') {
                line[i] += 3;
            }
            if (i < middle) {
                line[i] -= 1;
            }
            if(line[i] != '\n') printf ("%c", line[i]);
        }
        printf ("\n");
    }
    return 0;
}
