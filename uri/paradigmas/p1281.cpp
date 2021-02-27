#include <iostream>
#include <iomanip>
#include <string>
#include <map>

using namespace std;

int main()
{
    int T, n, qtd;
    map<string, double> products;
    double price, cart_price;
    string product;

    cin >> T;
    while (T--) {
        products.clear();
        cart_price = 0;

        cin >> n;
        while (n--) {
            cin >> product >> price;
            products[product] = price;
        }

        cin >> n;
        while (n--) {
            cin >> product >> qtd;
            cart_price += products[product] * qtd;
        }

        cout << fixed << setprecision(2) << "R$ " << cart_price << endl;
    }

    return 0;
}
