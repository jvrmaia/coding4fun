#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{
    char c;
    while (1) {
        c = getchar();
        if (c == EOF) break;
        char cur = c, last_match = '\0';
        if (cur >= 'A' && cur <= 'Z') cur -= ('A' - 'a');
        int cnt = 0;
        bool verify = false;
        while (1) {
            c = getchar();
            if (c == '\n') break;
            if (c >= 'A' && c <= 'Z') c -= ('A' - 'a');
            if (verify) {
                if (c == cur && c != last_match) {
                    cnt++;
                    last_match = c;
                }
                else if (c != cur) {
                    last_match = '\0';
                }
                cur = c;
                verify = false;
            }
            if (c == ' ') verify = true;
        }
        printf ("%d\n", cnt);
    }
    return 0;
}
