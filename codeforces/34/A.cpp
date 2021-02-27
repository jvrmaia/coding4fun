#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <cstring>
#include <string>
#include <iostream>
#include <cmath>
#include <set>

using namespace std;

#define REP(i,n)    for(int i=0;i<n;i++)
#define DO(i,a,b)   for(int i=a;i<b;i++)
#define EACH(it,v)  for(__typeof((v).begin()) it=(v).begin(); it<(v).end(); ++it)
#define ALL(v)      (v).begin(),(v).end()
#define SIZE(x)     (int)((x).size())

const int       INF = 0x3f3f3f3f;
const double    PI  = 2*acos(0);
const double    EPS = 1e-10;

int main(){
    int n;
    scanf("%d",&n);
    int x,xant,first, mini=INF,pos;
    scanf("%d",&first);
    xant = first;
    REP(i,n-1){
        scanf("%d",&x);
        if(mini>abs(x-xant)){
            pos = i+1;
            mini = abs(x-xant);
        }
        xant = x;
    }
    if(mini>abs(x-first)){
        pos = n;
    }
    printf("%d %d\n", pos, ((pos==n) ? 1 : pos+1) );
    return 0;
}
