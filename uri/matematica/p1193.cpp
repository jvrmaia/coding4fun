#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>

using namespace std;

int pot2(int x)
{
    int ret = 1;
    for (int i = 0; i < x; i++) ret *= 2;
    return ret;
}

int pot16(int x)
{
    int ret = 1;
    for (int i = 0; i < x; i++, ret *= 16);
    return ret;
}

void dec2bin(int x) {
    vector<int> v;
    vector<int>::reverse_iterator it;
    while (x != 0) {
        v.push_back(x % 2);
        x = x/2;
    }
    for (it = v.rbegin(); it != v.rend(); ++it)
        printf ("%d", *it);
    printf (" bin\n");
}

int char_to_int(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a')
        return c - 'a' + 10;
}

int main()
{
    int n;
    scanf ("%d ", &n);
    char num[100], base[100];
    for (int kase = 1; kase <= n; kase++) {
        scanf ("%s %s ", num, base);
        printf ("Case %d:\n", kase);
        if (strstr("bin", base)) {
            int n = 0, size = strlen(num);
            for (int i = 0; i < size; i++) {
                n += pot2(size - i - 1) * (num[i] - '0');
            }
            printf ("%d dec\n", n);
            printf ("%x hex\n", n);
        }
        if (strstr("dec", base)) {
            int n = atoi(num);
            printf ("%x hex\n", n);
            dec2bin(n);
        }
        if (strstr("hex", base)) {
            int n = 0, size = strlen(num);
            for (int i = 0; i < size; i++) {
                n += pot16(size - i - 1) * char_to_int(num[i]);
            }
            printf ("%d dec\n", n);
            dec2bin(n);
        }
        printf ("\n");
    }
    return 0;
}
