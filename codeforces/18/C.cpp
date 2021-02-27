#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>
#include <cstring>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int total=0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }
    int ans = 0, left = v[0];
    for(int i = 1; i < n; i++) {
        if (left == total - left) ans++;
        left += v[i];
    }
    cout << ans << endl;
    return 0;
}
