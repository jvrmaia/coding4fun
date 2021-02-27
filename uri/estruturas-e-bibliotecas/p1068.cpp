#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string line;
    string::iterator it;
    while (cin >> line) {
        stack<char> s;
        for (it = line.begin(); it != line.end(); ++it) {
            if (*it == '(' || *it == ')') {
                if (s.empty()) {
                    s.push(*it);
                }
                else {
                    if (s.top() != *it && *it == ')') {
                        s.pop();
                    }
                    else {
                        s.push(*it);
                    }
                }
            }
        }
        if (s.empty()) {
            cout << "correct" << endl;
        }
        else {
            cout << "incorrect" << endl;
        }
    }
    return 0;
}
