#include <iostream>
#include <map>
#include <string>
#include <vector> 
using namespace std;

 int main(){
 	map<string,int> m;
 	int n,k;
 	cin >> n;
 	for(int i = 0; i < n; i++){
 		cin >> k;
 		string lang;
 		for(int j = 0; j < k; j++){
 			cin >> lang;
 			m[lang]++;
 		}
 	}
 	vector <string> v1,v2;
 	map<string,int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it){
    	string key = (*it).first; 
    	if(m[key] == n ){
    		v1.push_back(key);
    	}
    	 
    		v2.push_back(key);
    	
    }
    cout << v1.size() << endl;
    for(int i = 0; i < v1.size(); i++){
    	cout << v1[i] << endl;
    }
    cout << v2.size() << endl;
    for(int i = 0; i < v2.size(); i++){
    	cout << v2[i] << endl;
    }
 	
 	return 0;
 }