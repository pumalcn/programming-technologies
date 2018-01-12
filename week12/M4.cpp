#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> s;
    int n;
    while (cin >> n) {
    	
      	if (s.find(n) == s.end()) {
            cout << "NO" << endl;
            s.insert(n);

        }
        else {
            cout << "YES" << endl;
        }
    }
    
 
    return 0;
}