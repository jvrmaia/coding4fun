#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

int main() {
    int n, x, ant;
    cin >> n;
    set<int> s;
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    ant = *s.begin();
    if (ant != 1) {
        cout << 1 << endl;
        return 0;
    }
    foreach(it, s) {
        if (*it - ant > 1) {
            cout << ant+1 << endl;
            return 0;
        }
        ant = *it;
    }
    cout << ant+1 << endl;
    return 0;
}
