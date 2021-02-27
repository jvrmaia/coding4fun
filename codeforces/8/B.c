#include <stdio.h>
#include <string.h>

#define TAM 300

int grid[TAM][TAM];

int main() {
    char movs[101];
    while (scanf ("%s ", movs) != EOF) {
        memset (grid, sizeof(grid), 0);
        int i, n = strlen(movs), x = 150, y = 150, ok = 1;
        grid[x][y] = 1;
        for (i = 0; i < n; i++) {
            switch (movs[i]) {
                case 'U':
                    y--;
                    ok = (grid[x][y-1] || grid[x-1][y] || grid[x+1][y]) ? 0 : ok;
                    break;
                case 'D':
                    y++;
                    ok = (grid[x][y+1] || grid[x-1][y] || grid[x+1][y]) ? 0 : ok;
                    break;
                case 'L':
                    x--;
                    ok = (grid[x-1][y] || grid[x][y-1] || grid[x][y+1]) ? 0 : ok;
                    break;
                case 'R':
                    x++;
                    ok = (grid[x+1][y] || grid[x][y-1] || grid[x][y+1]) ? 0 : ok;
                    break;
                default: break;
            }
            ok = (grid[x][y]) ? 0 : ok;
            grid[x][y] = 1;
        }
        if (!ok)
            printf ("BUG\n");
        else
            printf ("OK\n");
    }
    return 0;
}
