#include <iostream>
#include <set>

using namespace std;


int main(){

	set<int> a;

	for(int i = 10; i>=1; --i){
		a.insert(i);
	}

	cout << a.size() << endl;

	set<int>::reverse_iterator it;

	for(it = a.rbegin(); it != a.rend(); ++it){
		cout << *it << endl;
	}

	return 0;
}