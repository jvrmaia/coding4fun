#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int b, n;
    while (cin >> b >> n) {
        if (!b && !n) break;
        vector<int> v(b);
        for (int i = 0; i < b; i++) cin >> v[i];
        int b1, b2, m;
        for (int i = 0; i < n; i++) {
            cin >> b1 >> b2 >> m;
            v[b1-1] -= m;
            v[b2-1] += m;
        }
        bool safe = true;
        for (int i = 0; i < b; i++)
            if (v[i] < 0) {
                safe = false;
                break;
            }
        if (safe) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}
