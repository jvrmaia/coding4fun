#include <cstdio>
#include <vector>
#include <utility>
#include <cstring>
#include <iostream>

using namespace std;

#define each(it,x) for(__typeof((x).begin()) it=(x).begin();it<(x).end();++it)

long long int N;
vector<pair<long long int, long long int> > g[100001];
long long int visited[100001];
long long int cost, costs[100001];

void bfs(int s){
    visited[s]=1;
    each(it,g[s]){
        if(!visited[it->first]){
            cost += it->second;
            costs[it->first] += it->second + costs[s]; 
            bfs(it->first);
        }
    }
}

int main(){
    cin >> N;
    long long int u,v,w,ans;
    for(int i=1;i<N;i++){
        cin >> u >> v  >> w;
        g[u].push_back(make_pair(v,w));
        g[v].push_back(make_pair(u,w));
    }
    bfs(1);
    ans=2*cost;
    long long int most_far=0, huge=-1;
    for(int i=1;i<N+1;i++){
        if(costs[i]>huge){
            huge = costs[i];
            most_far = i;
        }
    }
    ans-=costs[most_far];
    cout << ans << endl;
    return 0;
}
