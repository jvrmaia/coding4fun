#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

#define foreach(it, x) for(__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)

int main() {
    int n, x, ans=-1;
    cin >> n;
    map<int, int> table;
    while (n--) {
        cin >> x;
        if (table[x]) {
            table[x]++;
        } else {
            table[x] = 1;
        }
    }
    foreach(it, table) {
        ans = max(ans, it->second);
    }
    cout << ans << " " << table.size() << endl;
    return 0;
}
