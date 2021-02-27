#include <iostream>

using namespace std;

int main()
{
    int n,d, v[2000],f,ans;
    while(cin >> n >> d){
        ans=0;
        for(int i=0;i<n;i++){
            cin >> v[i];
            if(i>0){
                if(v[i]<=v[i-1]){
                    f=(v[i-1]-v[i])/d+1;
                    ans+=f;
                    v[i]+=f*d;
                }
            }
        }
        cout << ans << endl;
    }
}
