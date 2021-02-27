#include <vector>
#include <cstdio>

using namespace std;

int main(){
    int n,x;
    vector<int> v;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            for(int k=0;k<v.size();k++){
                if(j!=k && v[i]==v[j]+v[k]){
                    printf("%d %d %d\n",i+1,j+1,k+1);
                    return 0;
                }
            }
        }
    }
    printf("-1\n");
    return 0;
}
