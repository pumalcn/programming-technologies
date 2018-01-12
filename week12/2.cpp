#include <iostream>
#include <set>

using namespace std;


int main(){

	set<int> a;

	for(int i = 10; i>=1; --i){
		a.insert(i);
	}

	int x;
	cin >> x;

	if(a.find(x) != a.end()){
		cout << "found!";
	}else{
		cout << "not found!";
	}

	cout << endl;

	return 0;
}