#include <cstdio>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int up=0, low=0, n;
    char line[120], upper[120], lower[120];
    scanf("%s",line);
    n = strlen(line);
    for(int i = 0; i < n; i++) {
        if (line[i]>='a' && line[i]<='z') {
            low++;
            lower[i] = line[i];
            upper[i] = toupper(line[i]);
        } else {
            up++;
            lower[i] = tolower(line[i]);
            upper[i] = line[i];
        }
    }
    lower[n]='\0';
    upper[n]='\0';
    if (up > low)
        printf("%s\n", upper);
    else
        printf("%s\n", lower);
    return 0;
}
