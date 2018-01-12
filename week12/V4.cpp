#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
 {
  freopen ("input.txt","r",stdin);
  freopen ("output.txt","w",stdout);

    int n;
    vector <int> a;
    while(cin >> n && n != 0){
      a.push_back(n);
    }
    reverse(a.begin(),a.end());
    for(vector<int>::iterator it = a.end() - a.size()/2; it != a.end();it++){
      cout << *it << " ";
    }    
    for(vector<int>::iterator it = a.begin(); it != a.end() - a.size()/2;it++){
      cout << *it << " ";
    }
    cout << endl;
    return 0;
  
 }
