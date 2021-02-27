#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>
#include <cstring>
#include <cmath>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

int main() {
    int n;
    cin >> n;
    float x = (sqrt(1 + 8 * n) - 1) / 2;
    if (ceil(x) == floor(x)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
