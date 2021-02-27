#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n) {
        string s;
        vector<string> numbers;
        for (int i = 0; i < n; i++) {
            cin >> s;
            numbers.push_back(s);
        }
        sort(numbers.begin(), numbers.end());

        int m = numbers[0].size(), cnt = 0;
        vector<int> v(m, 1);

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (j == 0) {
                    if (numbers[i-1][0] == numbers[i][0]) {
                        cnt++;
                        v[0] = 1;
                    }
                    else {
                        v[0] = 0;
                    }
                }
                else if (v[j-1]) {
                    if (numbers[i-1][j] == numbers[i][j]) {
                        cnt++;
                        v[j] = 1;
                    }
                    else {
                        v[j] = 0;
                    }
                }
                else {
                    v[j] = 0;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
