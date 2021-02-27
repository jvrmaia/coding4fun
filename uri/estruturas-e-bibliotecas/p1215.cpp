#include <string>
#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

int main()
{
    char c;
    string s = "";
    set<string> v;
    set<string>::iterator it;
    while (1) {
        c = getchar();
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            if (c >= 'A' && c <= 'Z')
                c -= ('A' - 'a');
            s += c;
        }
        else if (c == EOF) {
            if (s.size() > 0)
                v.insert(s);
            break;
        }
        else {
            if (s.size() > 0)
                v.insert(s);
            s = "";
        }
    }
    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << endl;
    return 0;
}
