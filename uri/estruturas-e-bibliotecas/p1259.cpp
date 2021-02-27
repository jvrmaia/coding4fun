#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> odds, evens;
    vector<int>::iterator it;
    vector<int>::reverse_iterator rit;
    cin >> n;
    while (cin >> n) {
        if (n % 2 == 0)
            evens.push_back(n);
        else
            odds.push_back(n);
    }
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());
    for (it = evens.begin(); it != evens.end(); ++it)
        cout << *it << endl;
    for (rit = odds.rbegin(); rit != odds.rend(); ++rit)
        cout << *rit << endl;
    return 0;
}
