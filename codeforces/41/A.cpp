#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <vector>
#include <cstring>
#include <numeric>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)
#define rforeach(it, x) for(__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); ++it)

bool is_palindrome(const string &s) {
    return equal(all(s),s.rbegin());
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;
    if (is_palindrome(a+b))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
