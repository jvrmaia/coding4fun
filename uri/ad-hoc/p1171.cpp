#include <iostream>
#include <map>

using namespace std;

int main()
{
    int a;
    map<int, int> m;
    map<int, int>::iterator it;
    cin >> a;
    while (cin >> a) {
        m[a]++;
    }
    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " aparece " << it->second << " vez(es)" << endl;
    }
    return 0;
}
