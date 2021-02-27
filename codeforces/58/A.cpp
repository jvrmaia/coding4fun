#include <iostream>
#include <algorithm>
#include <map>
#include <list>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)
#define rforeach(it, x) for(__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); ++it)

int main() {
    list<char> hello;
    hello.push_back('h');
    hello.push_back('e');
    hello.push_back('l');
    hello.push_back('l');
    hello.push_back('o');
    char c;
    while(cin >> c) {
        if (c == *hello.begin()) {
            hello.pop_front();
        }
    }
    if (hello.size() == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
