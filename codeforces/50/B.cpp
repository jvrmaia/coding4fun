#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    string line;
    cin >> line;
    long long v[256];
    memset(v, 0, sizeof(v));
    for (int i = 0; i < line.size(); i++) v[line[i]]++;
    long long ans = 0;
    for (int i = 0; i < 256; i++) ans += v[i]*v[i];
    cout << ans << endl;
    return 0;
}
