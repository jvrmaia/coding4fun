#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << ((((n-2)%2==0) && (n!=2)) ? "YES" : "NO") << endl;
    return 0;
}
