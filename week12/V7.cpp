#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 int isPrime(int n){
    
    for(int i = 2; i < sqrt(n);i++){
        if(n % i == 0) return false;
    }
     return true;
 }
 int main(){
    int n;
    cin >> n;
    vector <int> a;
    for(int i = 2; i < n; i++){
        if(true == isPrime(i)){
            a.push_back(i);
        }
    }
    for(vector<int>::iterator it = a.begin(); it != a.end(); ++it){
            cout << *it << " ";
        }
        return 0;
    }