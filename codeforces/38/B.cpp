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
#include <cctype>

using namespace std;

#define all(c) (c).begin(), (c).end()
#define foreach(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define rforeach(i,c) for(__typeof((c).rbegin()) i=(c).rbegin(); i!=(c).rend(); ++i)

int b[8][8];
int side[9][2]= {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {-2, 1}, {2, -1}, {-2, -1}, {0, 0}};

bool out(int x, int y) {
    return (x < 0 || y < 0 || x >= 8 || y >= 8);
}

int main()
{
    int ans = 0;
    string p,q;
    cin >> p >> q;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < 8; i++) {
        b[p[0]-'a'][i] = 1;
        b[i][p[1]-'1'] = 1;
    }
    for (int i = 0; i < 9; i++) {
        int x = q[0]-'a' + side[i][0];
        int y = q[1]-'1' + side[i][1];
        if (!out(x,y)) {
            b[x][y] = 1;
        }
    }
    for (int i = 0; i < 9; i++) {
        int x = p[0]-'a' + side[i][0];
        int y = p[1]-'1' + side[i][1];
        if (!out(x,y)) {
            b[x][y] = 1;
        }
    }
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (!b[i][j])
                ans++;
    cout <<  ans << endl;
    return 0;
}
