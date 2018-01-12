#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
 freopen ("input.txt","r",stdin);   
 freopen ("output.txt","w",stdout);

    int n;
    cin>>n;
    vector <int> a;
    int k;
    for(int i = 0; i < n; ++i){
      cin>>k;
      a.push_back(k);
    }
    sort(a.begin(),a.end());
    for(auto it = a.begin(); it!= a.end(); ++it){
        cout << *it <<" ";
    }
    return 0;
}