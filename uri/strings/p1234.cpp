#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    while (!feof(stdin)) {
        char *line = NULL;
        size_t ss;
        getline (&line, &ss, stdin);
        int len = strlen(line);
        bool up = true;
        for (int i = 0; i < len; i++) {
            if (up) {
                if (line[i] >= 'a' && line[i] <= 'z') {
                    printf ("%c", line[i] + 'A' - 'a');
                    up = false;
                }
                else {
                    printf ("%c", line[i]);
                    if (line[i] >= 'A' && line[i] <= 'Z') up = false;
                }
            }
            else {
                if (line[i] >= 'A' && line[i] <= 'Z') {
                    printf ("%c", line[i] - 'A' + 'a');
                    up = true;
                }
                else {
                    printf ("%c", line[i]);
                    if (line[i] >= 'a' && line[i] <= 'z') up = true;
                }
            }
        }
    }
    return 0;
}
