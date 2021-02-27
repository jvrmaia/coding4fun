#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>
#include <cstring>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

template<class T> inline vector<pair<T,int> > factorize(T n){
    vector<pair<T,int> > R;
    for(T i=2;n>1;){
        if(n%i==0){
            int C=0;
            for(;n%i==0;C++,n/=i);
            R.push_back(make_pair(i,C));
        }
        i++;
        if(i>n/i) i=n;
    }
    if(n>1) R.push_back(make_pair(n,1));
    return R;
}

int main() {
    int n, ans=0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        vector<pair<int, int> > v = factorize(i);
        if (v.size() == 2) ans++;
    }
    cout << ans << endl;
    return 0;
}
