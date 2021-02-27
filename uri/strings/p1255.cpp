#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    else
        return p1.second < p2.second;
}

int main()
{
    int n;
    cin >> n;
    string line;
    while (getline(cin,line)) {
        if (line == "") continue;
        vector<pair<int, int> > v;
        vector<pair<int, int> >::iterator it;
        for (int i = 0; i < 27; i++) v.push_back(make_pair(i, 9999));
        string::iterator jt;
        int most = -1;
        for (jt = line.begin(); jt != line.end(); ++jt) {
            int pos;
            if (*jt >= 'A' && *jt <= 'Z') pos = *jt - 'A';
            else if (*jt >= 'a' && *jt <= 'z') pos = *jt - 'a';
            else continue;
            if (pos >= 0 && pos <= 26) {
                if (v[pos].second == 9999) {
                    v[pos].second = 1;
                    if (v[pos].second > most) most = v[pos].second;
                }
                else {
                    v[pos].second++;
                    if (v[pos].second > most) most = v[pos].second;
                }
            }
        }
        sort(v.begin(), v.end(), cmp);
        for (it = v.begin(); it != v.end(); ++it) {
            if (it->second == most)
                cout << (char)('a'+it->first);
        }
        cout << endl;
    }
    return 0;
}
