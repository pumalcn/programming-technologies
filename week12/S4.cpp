#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;
void readData(set<int> &s){
  string line;
  getline(cin,line);
  stringstream ss;
  int x;
  while(ss >> x){
    s.insert(x);
  }
}
 int main(){
 freopen ("input.txt","r",stdin);   
 freopen ("output.txt","w",stdout);
  set <int> c,g,h;
  string line;
  getline(cin,line);
  int n = atoi(line.c_str());
  cin >> n;
  set <int> a,b;
  readData(a);
  readData(b);
  set <int>:: iterator it;
  for(it = a.begin(); it != a.end(); it++){
    if(b.find(*it) != b.end()){
      g.insert(*it);
    }
  }
  for(it = c.begin(); it != c.end(); it++){
    if(a.find(*it) == a.end() && b.find(*it) == b.end()){
      h.insert(*it);
    }
  }
  for(it = g.begin(); it != g.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
  for(it = h.begin(); it != h.end(); it++){
    cout << *it << " ";
  }
         return 0;
}
