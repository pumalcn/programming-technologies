/*#include<iostream>
#include<map>
using namespace std;
void insertvalues(set<int>&s){
	int x;
    while(cin >> x;){
        s.insert(x);
    }
void countpair(set<int>&k,set<int>&l){
	int cnt = 0;
	for(set <int> ::iterator it = k.begin(); it != k.end(); it++){
		if(k.find(l) != k.end()){
			cnt++;
		}
	}
	cout << cnt << endl;
}
}
int main(){
	set <int> a,b;
	insertvalues(a);
	insertvalues(b);
	countpair(a,b);
	countpair(b,a);
	cout << endl;
	return 0;

}*/
#include <iostream>
#include <set>
#include <sstream>
#include <string>
 
using namespace std;
 
 
int main(){
 
    //freopen("input.txt", "r", stdin);
    set<int> a, b;
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
    int cnt = 0;
 
    set <int>::iterator it;
    for (it = a.begin(); it != a.end(); ++it){
        int k = *it;
        if (b.find(k) != b.end()){
            cnt++;
        }
    }
 
 
    cout << cnt<< endl;
 
    return 0;
}