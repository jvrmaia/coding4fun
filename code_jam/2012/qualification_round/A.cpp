#include <map>
#include <string>
#include <iostream>

using namespace std;

#define EACH(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)

int main() {
   map<char, char> m;
   m['a'] = 'y'; m['b'] = 'h'; m['c'] = 'e'; m['d'] = 's';
   m['e'] = 'o'; m['f'] = 'c'; m['g'] = 'v'; m['h'] = 'x';
   m['i'] = 'd'; m['j'] = 'u'; m['k'] = 'i'; m['l'] = 'g';
   m['m'] = 'l'; m['n'] = 'b'; m['o'] = 'k'; m['p'] = 'r';
   m['q'] = 'z'; m['r'] = 't'; m['s'] = 'n'; m['t'] = 'w';
   m['u'] = 'j'; m['v'] = 'p'; m['w'] = 'f'; m['x'] = 'm';
   m['y'] = 'a'; m['z'] = 'q'; m[' '] = ' ';
   string str;
   int T;
   cin >> T;
   getline (cin, str); 
   for (int i = 1; i <= T; i++) {
       getline (cin, str); 
       cout << "Case #" << i << ": ";
       EACH (it, str)
           cout << m[*it];
       cout << endl;
   }
   return 0;
}
