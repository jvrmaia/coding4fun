#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        if (!n) break;
        vector<int> v(n);
        vector<int>::iterator it;
        int peeks = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (v[0] != v[n-1]) {
            v.push_back(v[0]);
            v.push_back(v[1]);
        }
        int size = v.size();
        for (int i = 1; i < size - 1; i++) {
            if (v[i] > v[i-1] && v[i] > v[i+1]) peeks++;
            if (v[i] < v[i-1] && v[i] < v[i+1]) peeks++;
        }
        cout << peeks << endl;
    }
    return 0;
}
