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

int main() {
    int n, m, acc=0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(all(v));
    for (int i = 0; i < m; i++) if (v[i] < 0) acc += v[i];
    cout << -acc  << endl;
    return 0;
}
