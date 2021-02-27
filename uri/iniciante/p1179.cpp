#include <cstdio>
#include <vector>

using namespace std;

void print(vector<int> v, char* type) {
    vector<int>::iterator it = v.begin();
    int i = 0;
    for (; it != v.end(); ++it) {
        printf ("%s[%d] = %d\n", type, i, *it);
        i++;
    }
}

int main()
{
    int a;
    vector<int> odds, evens;
    for (int i = 0; i < 15; i++) {
        scanf ("%d ", &a);
        if (a % 2 == 0) {
            evens.push_back(a);
            if (evens.size() == 5) {
                print (evens, (char*)"par");
                evens.clear();
            }
        }
        else {
            odds.push_back(a);
            if (odds.size() == 5) {
                print (odds, (char*)"impar");
                odds.clear();
            }
        }
    }
    print (odds, (char*)"impar");
    print (evens, (char*)"par");
    return 0;
}
