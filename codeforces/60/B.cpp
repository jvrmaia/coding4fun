#include <cstdio>

using namespace std;

int Z, X, Y;
char cube[11][11][11];
bool visited[11][11][11];

void dfs(int x, int y, int z) {
    if (x < 0 || x >= X || y < 0 || y >= Y || z < 0 || z >= Z || cube[z][x][y] == '#' || visited[z][x][y]) {
        return;
    }
    visited[z][x][y] = true;
    dfs(x+1, y, z);
    dfs(x-1, y, z);
    dfs(x, y+1, z);
    dfs(x, y-1, z);
    dfs(x, y, z+1);
    dfs(x, y, z-1);
}

int main() {
    scanf("%d %d %d", &Z, &X, &Y);

    for (int z = 0; z < Z; z++) {
        for (int x = 0; x < X; x++) {
            scanf("%s", cube[z][x]);
        }
    }

    int x, y;

    scanf("%d %d", &x, &y);
    x--; y--;
    dfs(x, y, 0);

    int total = 0;
    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                if (visited[z][x][y]) total++;
            }
        }
    }
    printf("%d\n", total);

    return 0;
}
