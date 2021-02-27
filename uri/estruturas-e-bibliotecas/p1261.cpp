#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<string, int> words;
    string word;
    int val;
    for (int i = 0; i < n; i++) {
        cin >> word >> val;
        words[word] = val;
    }
    int ans = 0;
    while (m > 0) {
        cin >> word;
        if (word == ".") {
            m--;
            cout << ans << endl;
            ans = 0;
            continue;
        }

        ans += words[word];
    }
    return 0;
}
