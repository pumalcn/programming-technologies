#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
 freopen ("input.txt","r",stdin);
 freopen ("output.txt","w",stdout);

    
    vector <int> a;
    int k;
      cin >> k;
      while(k != 0){
        a.push_back(k);
        cin >> k;
        
      }
        
    
    sort (a.begin(),a.end());
    for(auto  it = a.begin(); it!=a.end(); ++it){
        cout << *it <<" ";
    }
    
}