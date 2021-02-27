#include <cstdio>
#include <vector>

using namespace std;

int main() {
    int T, l1, l2, m1[4][4], m2[4][4];
    vector<int> matches;

    scanf ("%d ", &T);

    for (int t = 1; t <= T; t++) {
        scanf ("%d ", &l1);
        l1--;

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                scanf ("%d ", &m1[i][j]);


        scanf ("%d ", &l2);
        l2--;

        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                scanf ("%d ", &m2[i][j]);


        matches.clear();

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (m1[l1][i] == m2[l2][j]) {
                    matches.push_back(m1[l1][i]);
                }
            }
        }

        printf ("Case #%d: ", t);
        switch(matches.size()) {
            case 0:
                printf ("Volunteer cheated!\n");
                break;
            case 1:
                printf ("%d\n", matches[0]);
                break;
            default:
                printf ("Bad magician!\n");
                break;
        }
    }

    return 0;
}
