#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
bool isappeared(int x,vector<int> v){
	bool res = false;
	for(int i = 0; i < v.size();i++){
		if(x == v[i]){
			res = true;
			break;
		}
	}
	return res;
}
 int main(){
 	vector<int> v;
 	int n;
 	vector<int>::iterator it;
 	while(cin >> n){
 		if(!isappeared(n,v)){
 			v.push_back(n);
 		}
 	}
 		cout << v.size() << endl;
 	return 0;
 }