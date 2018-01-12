#include <iostream>
#include <map>
#include <string>
using namespace std;
 int main(){
 	freopen("input.txt","r",stdin);
 	map <string,int> m;
 	string s;
 	while(cin >> s){
 		cout << m[s] << " ";
 		m[s]++;
 }
 	return 0;
 }
