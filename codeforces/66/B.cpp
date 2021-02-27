#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <utility>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define each(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)
#define reach(it, x) for (__typeof((x).rbegin()) it = (x).rbegin(); it != (x).rend(); ++it)

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i <n; i++) {
        cin >> v[i];
    }
    int ans = -1;
    for (int it = 0; it < n; it++) {
        int aux = 1;
        int pos_max = it;
        for (int i = pos_max; i > 0; i--) {
            if (v[i-1] > v[i]) break;
            aux++;
        }
        for (int i = pos_max; i < n - 1; i++) {
            if (v[i+1] > v[i]) break;
            aux++;
        }
        ans = max(ans, aux);
    }
    cout << ans << endl;
    return 0;
}
