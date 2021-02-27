#include <cstdio>
#include <vector>
#include <cstdlib>
#include <cstring>

using namespace std;

unsigned int pot10(int x)
{
    unsigned int ret = 1;
    for (int i = 0; i < x; i++, ret *= 10);
    return ret;
}

unsigned int pot16(int x)
{
    unsigned int ret = 1;
    for (int i = 0; i < x; i++, ret *= 16);
    return ret;
}

unsigned int char_to_int(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'A')
        return c - 'A' + 10;
}

char int_to_char(int n)
{
    if (n >= 0 && n <= 9)
        return '0' + n;
    else
        return 'A' + n - 10;
}

void dec2hex(unsigned int x)
{
    vector<char> v;
    vector<char>::reverse_iterator it;
    while (x != 0) {
        v.push_back(int_to_char(x % 16));
        x = x / 16;
    }
    v.push_back('x');
    v.push_back('0');
    for (it = v.rbegin(); it != v.rend(); ++it)
        printf ("%c", *it);
    printf ("\n");
}

int main()
{
    char num[100];
    while(!feof(stdin)) {
        scanf ("%s ", num);
        if(num[0] == '-') {
            break;
        }
        else if (num[1] != 'x') {
            unsigned int n = 0, size = strlen(num);
            for (int i = 0; i < size; i++) {
                n += pot10(size - i - 1) * (num[i] - '0');
            }
            if (n == 0)
                printf ("0x0\n");
            else
                dec2hex(n);
        }
        else {
            unsigned int n = 0, size = strlen(num) - 2;
            for (int i = 2; i < size + 2; i++) {
                n += pot16(size - i + 1) * char_to_int(num[i]);
            }
            printf ("%u\n", n);
        }
    }
    return 0;
}
