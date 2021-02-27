#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <string>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define each(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)
#define reach(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); ++it)

int main() {
    int wl, wr, ml, mr;
    cin >> wl >> wr >> ml >> mr;
    if (mr <= ((wl + 1) * 2) && wl <= + 1 + mr)
        cout << "YES" << endl;
    else if (ml <= ((wr + 1) * 2) && wr <= 1 + ml)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
