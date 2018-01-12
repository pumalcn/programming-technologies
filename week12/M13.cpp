#include <iostream>
#include <map>
#include <string>
using namespace std;
 int main(){
 	map <string,int> m;
 	map <string,int>:: iterator it;
 	string president;
 	int voice;
 	while(cin >> president >> voice){
 		m[president] += voice;
 	}
 	for(it = m.begin(); it != m.end(); it++){
 		cout << (*it).first << " " << (*it).second << endl;
 	}
 	return 0;
 }