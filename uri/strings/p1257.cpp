#include <string>
#include <iostream>

using namespace std;

unsigned long long calc(string s)
{
    int len = s.size();
    unsigned long long ret = 0;
    for (int i = 0; i < len; i++)
        ret += s[i] - 'A' + i;
    return ret;
}

int main()
{
    int n;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        unsigned long long ret = 0;
        string s;
        for (int i = 0; i < m; i++) {
            cin >> s;
            ret += calc(s) + i * s.size();
        }
        cout << ret << endl;
    }
    return 0;
}
