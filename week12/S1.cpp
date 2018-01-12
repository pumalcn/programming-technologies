#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;
 	void insertvalues(set<int>&s){
 		int n,x;
 		cin >> n;
 		for(int i = 0; i < n; i++){
 			cin >> x;
 			s.insert(x);
 		}
 	}
   void findUnique(set<int>&k,set<int>&l,set<int>&m){
   	for(set<int>::iterator it = k.begin(); it != k.end(); it++){
   		if(l.find(*it) == l.end()){
   			m.insert(*it);
   		}
   	}
  }

  void writeSet(set<int>&s){
  	cout << s.size() << endl;
  	for(set<int>::iterator it = s.begin(); it != s.end(); it++){
  		cout << *it << " ";
  	}
  }



int main(){
	set<int> a,b,c;
	insertvalues(a);
	insertvalues(b);

	findUnique(a,b,c);
	findUnique(b,a,c);
    
    writeSet(c);
         cout << endl;
         return 0;
}
