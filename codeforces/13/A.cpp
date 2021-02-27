#include <cstdio>

using namespace std;

int gcd(int a, int b){
    int c;
    while(1){
        c=a%b;
        if(c==0) return b;
        a = b;
        b = c;
    }
}

int main()
{
    int i,j,a,sum;
    while(!feof(stdin)){
        scanf("%d\n",&a);
        sum=0;
        for(i=2;i<a;i++){
            j=a;
            while(j>0){
                sum+=j%i;
                j=j/i;
            }
        }
        printf("%d/%d\n",sum/gcd(sum,a-2),(a-2)/gcd(sum,a-2));
    }
    return 0;
}
