#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m;
    if (n % 2 == 0) {
        if (m % 2 == 0) {
            a = n*m/2;
        } else {
            a = n*(m-1)/2 + n/2;
        }
    } else {
        if (m % 2 == 0) {
            a = (n-1)*m/2 + m/2;
        } else {
            a = (n-1)*(m-1)/2 + (n-1)/2 + (m-1)/2;
        }
    }
    cout << a << endl;
    return 0;
}
