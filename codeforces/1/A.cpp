#include <iostream>
#include <cmath>

using namespace std;

int main() {
    unsigned long long n, m, a;
    cin >> n >> m >> a;
    cout << ((n%a==0) ? n/a : n/a+1)*((m%a==0) ? m/a : m/a+1) << endl;
    return 0;
}
