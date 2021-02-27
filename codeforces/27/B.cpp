#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <list>
#include <vector>
#include <cstring>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define foreach(it, v) for(__typeof((v).begin()) it = (v).begin(); it != (v).end(); ++it)
#define rforeach(it, v) for(__typeof((v).rbegin()) it = (v).rbegin(); it != (v).rend(); ++it)

int main() {
    int n;
    cin >> n;
    int matrix[51][51];
    memset(matrix, 0, sizeof(matrix));
    int x, y;
    for(int i = 0; i < n*(n-1)/2-1; i++) {
        cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = -1;
    }
    int a, b;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if( matrix[i][j] == matrix[j][i] && i != j) {
                a = i;
                b = j;
                break;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        if (matrix[a][i] == 1 && matrix[i][b] == 1) {
            cout << a << " " << b << endl;
            return 0;
        }
    }
    cout << b << " " << a << endl;
    return 0;
}
