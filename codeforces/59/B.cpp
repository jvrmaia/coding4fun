#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define each(i,c) for(__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define reach(i,c) for(__typeof((c).rbegin()) i = (c).rbegin(); i != (c).rend(); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> odds, evens;
    int x;
    while(n--) {
        cin >> x;
        if (x % 2)
            odds.push_back(x);
        else
            evens.push_back(x);
    }
    sort(all(odds));
    sort(all(evens));
    int a = odds.size(), b = evens.size();
    int acc = 0;
    if (a > 0 && b > 0) {
        a--; b--;
        acc += accumulate(all(odds), 0) + accumulate(all(evens), 0);
        if (acc % 2 == 0) 
            acc -= *odds.begin();
    } else if (b == 0) {
        each(it, odds)
            acc += *it;
        if (acc % 2 == 0)
            acc -= *odds.begin();
    }
    cout <<  acc << endl;
    return 0;
}
