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

vector<string> splitAll(string s, string t) {
    vector<string> v;
    for (int p = 0; (p = s.find(t)) != s.npos; ) {
        v.push_back(s.substr(0, p));
        s = s.substr(p + t.size());
    }
    v.push_back(s);
    return v;
}

int main(){
    string line;
    while(getline(cin, line)) {
        vector<string> v = splitAll(line, " ");
        rforeach(word, v) {
            string last = *word;
            rforeach(it, last) {
                char c = tolower(*it);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ) {
                    cout << "YES" << endl;
                    return 0;
                } else if(c >= 'a' && c <= 'z') {
                    cout << "NO" << endl;
                    return 0;
                }
            }

        }

    }
    return 0;
}
