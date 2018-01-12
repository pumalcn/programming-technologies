#include<iostream>
#include <set>
#include<sstream>
using namespace std;
 int main()
 {
    set <int> a, b;
    string s, c;
    int x, y;
 
    getline(cin, s);
    stringstream ss (s);
 
    while(ss >> x){
        a.insert(x);
    }
    getline(cin, c);
    stringstream cc (c);
 
    while(cc >> y){
        b.insert(y);
    }	
 	
 	set<int> d;
    set<int>:: iterator it;
    for(it = a.begin(); it != a.end(); it++){
    	int k = *it;
    	if(b.find(k) != b.end()){
    		d.insert(k);
    	}
    }
    for(it = d.begin(); it != d.end(); it++){
    	cout << *it << endl;
    }
 	return 0;
 }