#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    int n, m;
    string s, sant;
    string::iterator it;
    cin >> n >> m;
    cin >> sant;
    it = unique(all(sant));
    if (it - sant.begin() > 1) {
        cout << "NO" << endl;
        return 0;
    } else {
        for (int i = 0; i < n-1; i++) {
            cin >> s;
            it = unique(all(s));
            if (it - s.begin() > 1 || s == sant) {
                cout << "NO" << endl;
                return 0;
            }
            sant = s;
        }
    }
    cout << "YES" << endl;
    return 0;
}
