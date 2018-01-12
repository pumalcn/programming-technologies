#include <iostream>
#include <map>
using namespace std;
 int main(){
 	int n;
 	map <int,int> m;
 	while(cin >> n){
 		m[n]++;
 	}
 	cout << m.size() << endl;
 	return 0;
 }