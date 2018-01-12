#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
vector<int> prime;
bool isPrime(int k){
    for(int i=2;i<=sqrt(k);++i){
        if(k%i==0){
            return false;
            break;
        }
    }
    return true;
}
void f(int n){
    int k=2;
    while(prime.size()!=n){
        if(isPrime(k)){
            prime.push_back(k);
        }
        k++;
    }
}
int main(){
    int n;
    cin>>n;
    f(n);
    for(int i=0;i<n;++i){
        cout<<prime[i]<<" ";
    }
    cout<<endl;
    return 0;
}