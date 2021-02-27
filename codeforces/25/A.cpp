#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>
#include <utility>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <deque>
#include <iostream>
#include <sstream>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define foreach(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define rforeach(i,c) for(__typeof((c).rbegin()) i=(c).rbegin(); i!=(c).rend(); ++i)

int main(){
    int n, x;
    set<int> odds, evens;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x % 2 == 0) odds.insert(i);
        else evens.insert(i);
    }
    if (odds.size() == 1)
        cout << *odds.begin() << endl;
    else
        cout << *evens.begin() << endl;
    return 0;
}
