#include <iostream>
#include <map>

using namespace std;

int main(){

	map<string,int> m;
	string name;
	int mark;

	while(cin >> name >> mark){
		if(m[name] < mark){
			m[name] = mark;
		}
	}

	map<string,int>::iterator it;

	for(it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
	}


	return 0;
}