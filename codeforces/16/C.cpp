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
    int M, N, m, n;
    cin >> M >> N >> m >> n;
    int gcd = __gcd(m, n);
    m /= gcd;
    n /= gcd;
    int Mm = M/m;
    int Nn = N/n;
    int mm = min(Mm, Nn);
    cout << mm*m << " " << mm*n << endl;
    return 0;
}
