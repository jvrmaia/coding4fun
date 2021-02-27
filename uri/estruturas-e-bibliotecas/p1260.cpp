#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n, total;
    string tree;
    map<string, int> trees;
    map<string, int>::iterator it;

    cin >> n;
    for (int i = 0; i < n;) {
        trees.clear();
        total = 0;
        while (getline(cin, tree)) {
            if (tree == "") {
                break;
            }
            else {
                total++;
                trees[tree]++;
            }
        }

        int size = trees.size();
        if (size > 0) {
            for (it = trees.begin(); it != trees.end(); ++it) {
                cout << it->first << " ";
                cout << fixed << setprecision(4) << 100 * (double)it->second / total << endl;
            }
            if (i != n - 1) cout << endl;
            i++;
        }
    }
    return 0;
}
