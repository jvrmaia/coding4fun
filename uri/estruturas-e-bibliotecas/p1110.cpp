#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n;
    while(cin >> n) {
        if (!n) break;
        queue<int> q;
        for (int i = 1; i<= n; i++) q.push(i);
        cout << "Discarded cards: ";
        while (q.size() > 1) {
            if (q.size() > 2)
                cout << q.front() << ", ";
            else
                cout << q.front() << endl;
            q.pop();
            q.push(q.front());
            q.pop();
        }
        cout << "Remaining card: " << q.front() << endl;
    }
    return 0;
}
