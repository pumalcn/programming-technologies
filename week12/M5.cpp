#include <iostream> 
#include <set>
using namespace std;
void f1(set<int>&s, int n){
	int k;
 	for( int i = 0; i < n; i++){
 		cin >> k; 
 		s.insert(k);
 	}
}
void f2(set<int>&q,set<int>&w,set<int>&e){
	for(set<int>::iterator it = q.begin(); it != q.end(); it++){
        if(w.find(*it) != w.end()){
            e.insert(*it);
        }
    }
}
void f3(set<int>&q,set<int>&w,set<int>&e){
	for(set<int>::iterator it = q.begin(); it != q.end(); it++){
        if(w.find(*it) == w.end()){
            e.insert(*it);
        }
    }
}
void f4(set<int>&s){
	cout << s.size() << endl;
	for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }
}
 int main(){
 	set <int> a,b,c,f,g;
 	int n,m;
 	cin >> n >> m;
 	f1(a,n);
 	f1(b,m);
    
    f2(a,b,c);
    f4(c);

    f3(a,b,f);
    f4(f);
    
    f3(b,a,g);
    f4(g);
  return 0;
 }