#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string line;
    getline(cin, line);
    for (int i = 0; i < n; i++) {
        string ret = "";
        getline(cin, line);
        string::iterator it;
        char last = ' ';
        for (it = line.begin(); it != line.end(); ++it) {
            if (last == ' ' && *it != ' ')
                ret += *it;
            last = *it;
        }
        cout << ret << endl;
    }
    return 0;
}
