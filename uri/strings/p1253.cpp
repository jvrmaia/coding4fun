#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    int T, n;
    char line[1000], chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf ("%d ", &T);
    while (T--) {
        scanf ("%s %d ", line, &n);
        int size = strlen(line), pos;
        char c;
        for (int i = 0; i < size; i++) {
            pos = line[i] - 'A' - n;
            if (pos < 0) pos += 26;
            c =  chars[pos];
            putchar(c);
        }
        putchar('\n');
    }
    return 0;
}
