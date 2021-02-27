#include <cstdio>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int T, a, b, c, d, sup, inf, x;
    char op;
    scanf ("%d ", &T);
    while (T--) {
        scanf ("%d / %d %c %d / %d ", &a, &b, &op, &c, &d);
        switch (op) {
            case '+':
                inf = b * d;
                sup = (inf / b) * a + (inf / d) * c;
                break;
            case '-':
                inf = b * d;
                sup = (inf / b) * a - (inf / d) * c;
                break;
            case '*':
                inf = b * d;
                sup = a * c;
                break;
            case '/':
                inf = b * c;
                sup = a * d;
                break;
        }
        printf ("%d/%d = ", sup, inf);
        x = gcd(sup, inf);
        if (x < 0) x *= -1;
        printf ("%d/%d\n", sup / x, inf / x);
    }
    return 0;
}
