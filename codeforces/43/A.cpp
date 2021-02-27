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
    int n, m=-1;
    string s, ans;
    map<string, int> teams;
    cin >> n;
    while (n--) {
        cin >> s;
        if (teams[s]) {
            teams[s]++;
            if (teams[s] > m){
                m = teams[s];
                ans = s;
            }
        } else {
            teams[s]=1;
            if (teams[s] > m){
                m = teams[s];
                ans = s;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
