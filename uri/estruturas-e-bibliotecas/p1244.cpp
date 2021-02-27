#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <utility>

using namespace std;

int cmp(pair<int, char*> p1, pair<int, char*> p2)
{
    if (strlen(p1.second) == strlen(p2.second))
        return p1.first < p2.first;
    else
        return strlen(p1.second) > strlen(p2.second);
}

int main()
{
    int n;
    scanf ("%d ", &n);
    while (n--) {
        char *line = NULL, *pch;
        size_t st;
        getline (&line, &st, stdin);
        vector<pair<int,char*> > v;
        pch = strtok (line, " ");
        int ord = 0;
        while (pch != NULL) {
            v.push_back(make_pair(ord, pch));
            pch = strtok (NULL, " ");
            ord++;
        }
        int len = strlen(v[ord-1].second);
        v[ord-1].second[len-1] = '\0';
        sort(v.begin(), v.end(), cmp);
        int size = v.size();
        for (int i = 0; i < size - 1; i++)
            printf ("%s ", v[i].second);
        printf ("%s\n", v[size - 1].second);
    }
    return 0;
}
