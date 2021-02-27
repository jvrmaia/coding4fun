#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>
#include <cstring>
#include <cmath>
#include <utility>
#include <stack>
#include <queue>
#include <sstream>
#include <map>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

map<string, int> id;

int cmp(pair<string, int> p1, pair<string, int> p2) {
    return p1.second < p2.second;
}

int main() {
    id["rat"] = 0;
    id["woman"] = 1;
    id["child"] = 1;
    id["man"] = 2;
    id["captain"] = 3;

    int n;
    vector<pair<string, int> > v;
    cin >> n;
    string a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back(make_pair(a, id[b]));
    }

    stable_sort(all(v), cmp);

    foreach(it, v)
        cout << it->first << endl;

    return 0;
}
