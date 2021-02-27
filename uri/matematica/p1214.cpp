#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int T;
    scanf ("%d ", &T);
    while (T--) {
        int n;
        scanf ("%d ", &n);
        vector<double> alunos;
        vector<double>::iterator it;
        double acc = 0, a, media;
        for (int i = 0; i < n; i++) {
            scanf ("%lf ", &a);
            acc += a;
            alunos.push_back(a);
        }
        media = acc / n;
        int total = 0;
        for (it = alunos.begin(); it != alunos.end(); ++it)
            if (*it > media)
                total++;
        printf ("%.3lf%%\n", 100 * (double)total/n);
    }
    return 0;
}
