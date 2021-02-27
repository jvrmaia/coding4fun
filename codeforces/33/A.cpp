#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <deque>
#include <iostream>
#include <sstream>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define foreach(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define rforeach(i,c) for(__typeof((c).rbegin()) i=(c).rbegin(); i!=(c).rend(); ++i)

int main(){
    int m, n, k;
    cin >> n >> m >> k;
    int r, c;
    vector<int> v(n+1);
    fill(all(v), 1000002);
    for (int i = 0; i < n; i++) {
        cin >> r >> c;
        v[r-1] = min(v[r-1], c);
    }
    int crucians = 0;
    for (int i = 0; i < m; i++) {
        crucians += v[i];
    }
    if (crucians <= k)
        cout << crucians << endl;
    else
        cout << k << endl;
    return 0;
}
