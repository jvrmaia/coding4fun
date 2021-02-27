#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m) {
        if (!n && !m) break;
        vector<bool> alice(100001, false), beatriz(100001, false);
        int a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            alice[a] = true;
        }
        for (int i = 0; i < m; i++) {
            cin >> a;
            beatriz[a] = true;
        }
        int x = 0, y = 0;
        for (int i = 0; i < 100001; i++) {
            if (!alice[i] && beatriz[i]) y++;
            if (!beatriz[i] && alice[i]) x++;
        }
        cout << ((x > y) ? y : x) << endl;
    }
    return 0;
}
