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
  ss << line;
  int x;
  while(ss >> x){
    s.insert(x);
  }
}

int main(){
 freopen ("input.txt","r",stdin);   
// freopen ("output.txt","w",stdout);

  string line;
  getline(cin,line);
  int n = atoi(line.c_str());
  set <int> a,b;

  readData(a);
  readData(b);

  for(int i = 1; i <= n; i++){
    if(a.find(i) != a.end() && b.find(i) != b.end()){
      cout << i << " ";
    }
  }
  cout << endl;
  for(int i = 1; i <= n; i++){
    if(a.find(i) == a.end() && b.find(i) == b.end()){
      cout << i << " ";
    }
  }

  return 0;
}
