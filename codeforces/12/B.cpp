#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string aline,bob;
    while(cin >> aline >> bob){
        sort(aline.begin(),aline.end());
        if(aline.at(0)=='0'){
            do{
                if(aline.at(0)!='0')
                    break;
            } while(next_permutation(aline.begin(),aline.end()));
        }
        if(aline==bob){
            cout << "OK\n";
        } else {
            cout << "WRONG_ANSWER\n";
        }
    }
    return 0;
}
