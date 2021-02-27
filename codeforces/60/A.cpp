#include <cstdio>   
#include <cstring>

using namespace std;

int main(){
    int n, m, k;
    scanf("%d %d", &n, &m);
    if(m == 0) { printf("%d\n", n); return 0; }
    int v[1001];
    char a[10], b[10], c[10], d[10];
    for(int i = 0; i <= n; i++) v[i] = 0;
    for(int i = 0; i < m; i++) {
        scanf("%s %s %s %s %dn", a, b, c, d, &k);
        v[k] = -1;
        if(c[0]=='l') {
            for (int j = 1; j <= n; j++) {
                if (j < k) v[j] = (v[j] == -1) ? -1 : 1;
                if (j > k) v[j] = -1;
            }
        } else {
            for (int j = 1; j <= n; j++) {
                if (j > k) v[j] = (v[j] == -1) ? -1 : 1;
                if (j < k) v[j] = -1;
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(v[i] == 1) {
            ans++;
        }
    }
    printf("%d\n", ((ans == 0) ? -1 : ans));
    return 0;
}
