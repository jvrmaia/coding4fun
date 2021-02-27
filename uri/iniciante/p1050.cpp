#include <cstdio>
#include <map>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    map<int, string> m;
    int a;
    m[61] = "Brasilia";
    m[71] = "Salvador";
    m[11] = "Sao Paulo";
    m[21] = "Rio de Janeiro";
    m[32] = "Juiz de Fora";
    m[19] = "Campinas";
    m[27] = "Vitoria";
    m[31] = "Belo Horizonte";
    scanf ("%d ", &a);
    cout << m[a] << endl;
    return 0;
}
