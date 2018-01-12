#include <iostream>
#include <set>
using namespace std;
 int main(){
 	set<int> s;
 	int n ;
 	while(cin >> n){
 		s.insert(n);
 	}
 	cout << s.size() << endl;
 	return 0;
 }