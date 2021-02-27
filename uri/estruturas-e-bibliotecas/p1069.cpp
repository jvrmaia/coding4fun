#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string line;
    string::iterator it;
    while (n--) {
        cin >> line;
        stack<char> s;
        int cnt = 0;
        for (it = line.begin(); it != line.end(); ++it) {
            if (*it == '<') {
                s.push(*it);
            }
            if (*it == '>') {
                if (!s.empty()) {
                    s.pop();
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
