#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        cout << (((i+2)*(i+1))/2)%n+1 << " ";
    }
    return 0;
}
