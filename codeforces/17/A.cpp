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

// Sieve primes
const unsigned MAX = 1000, MAX_S = sqrt(MAX);
unsigned w[16] = {1, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 49, 53, 59};
unsigned short notprime[MAX];
vector<int> primes;

void sieve() {
    unsigned mod[16][16], di[16][16], num;
    for(int i = 0; i < 16; i++)
        for(int j = 0; j < 16; j++) {
            di[i][j] = (w[i]*w[j])/60;
            mod[i][j] = lower_bound(w, w + 16, (w[i]*w[j])%60) - w;
        }

    primes.push_back(2); primes.push_back(3); primes.push_back(5);

    memset(notprime, 0, sizeof notprime);
    for(unsigned i = 0; i < MAX; i++)
        for(int j = (i==0); j < 16; j++) {
            if(notprime[i] & (1<<j)) continue;
            primes.push_back(num = 60*i + w[j]);

            if(i > MAX_S) continue;
            for(unsigned k = i, done = false; !done; k++)
                for(int l = 0; l < 16 && !done; l++) {
                    unsigned mult = k*num + i*w[l] + di[j][l];
                    if(mult >= MAX) done = true;
                    else notprime[mult] |= 1<<mod[j][l];
                }
        }
}

int main(){
    int n, k, ans = 0;
    cin >> n >> k;
    sieve();
    for (int i = 2; i <= n; i++) {
        int x = primes[i] + primes[i+1] + 1;
        vector<int>::iterator it = find(all(primes), x);
        if (it != primes.end() && x >= 2 && x <= n) {
            ans++;
        }
    }
    if (ans >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
