#include <iostream>
#include <set>
#include <string>

using namespace std;

#define all(x) (x).begin(), (x).end()

int main() {
    int ans = 0;
    set<string> people;
    string cmd;
    while(getline(cin,cmd)) {
        if (cmd[0] == '+') {
            people.insert(cmd.substr(1,cmd.size()));
        }
        else if (cmd[0] == '-') {
            people.erase(cmd.substr(1,cmd.size()));
        } else {
            int it = cmd.find(":");
            ans += people.size() * (cmd.size() - it - 1);
        }
    }
    cout << ans << endl;
    return 0;
}
