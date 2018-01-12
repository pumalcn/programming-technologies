#include <iostream>
#include <set>
using namespace std;
int main(){
	freopen ("input.txt","r",stdin);
	string str;
	set <string> s;
	while(cin >> str){
		s.insert(str);
	}
	cout << s.size() << endl;
	return 0;
}