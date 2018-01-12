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
    if(a.size() % 2 == 0){
        cout << a[a.size()/2 - 1] << " " << a[a.size/2];
    }
    if(a.size() % 2 != 0){
        cout << a[a.size()/2];
    }
    cout << endl;
    return 0;
}