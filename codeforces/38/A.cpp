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
    int n;
    cin >> n;
    int v[200];
    memset(v,0,sizeof(v));
    for (int i = 0; i < n - 1; i++) cin >> v[i];
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    cout << accumulate(v+a, v+b, 0) << endl;
    return 0;
}

