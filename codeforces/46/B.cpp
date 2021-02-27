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

int main(){
    int tshirts[5];
    for (int i = 0; i < 5; i++) cin >> tshirts[i];
    int n;
    cin >> n;
    string s;
    map<string, string> m;
    m["S"]   = "01234";
    m["M"]   = "12034";
    m["L"]   = "23140";
    m["XL"]  = "34210";
    m["XXL"] = "43210";
    while (n--) {
        cin >> s;
        foreach(it, m[s]) {
            if (tshirts[*it - '0']) {
                tshirts[*it -'0']--;
                switch (*it - '0') {
                    case 0: cout << "S" << endl; break;
                    case 1: cout << "M" << endl; break;
                    case 2: cout << "L" << endl; break;
                    case 3: cout << "XL" << endl; break;
                    case 4: cout << "XXL" << endl; break;
                }
                break;
            }
        }
    }
    return 0;
}
