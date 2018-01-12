#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
	int n;
	cin >> n;
	vector <int> a;
    int k;
	for(int i = 0; i < n; ++i){
		cin >> k;
		if(k!=0){
		a.push_back(k);
	}
}
	reverse(a.begin(),a.end());
	for(int i = 0; i < a.size(); ++i){
		cout << a[i] << " ";
	}
	return 0;
}