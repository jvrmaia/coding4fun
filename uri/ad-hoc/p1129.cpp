#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int t, a, b, c, d, e;
    while (1) {
        scanf ("%d ", &t);
        if (!t) break;
        for (int i = 0; i < t; i++) {
            vector<char> v;
            scanf ("%d %d %d %d %d ", &a, &b, &c, &d, &e);
            if (a <= 127) v.push_back('A');
            if (b <= 127) v.push_back('B');
            if (c <= 127) v.push_back('C');
            if (d <= 127) v.push_back('D');
            if (e <= 127) v.push_back('E');
            if (v.size() == 1)
                printf ("%c\n", *v.begin());
            else
                printf ("*\n");
        }
    }
    return 0;
}
