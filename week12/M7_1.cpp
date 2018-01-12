#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

using namespace std;

vector<long long> split(string s){
	vector<long long> res;
	stringstream ss;
	ss << s;
	long long x;
	while(ss >> x){
		res.push_back(x);
	}
	return res;
}

int main(){

	string line,nums_line,ans_line;
	getline(cin,line);
	long long n = atoi(line.c_str());
	long long mt = 0;

	map<long long,long long> m;
	map<long long,long long>::iterator it;

	for(size_t i = 1; i <= n; ++i){
		m[i] = 0;
	}

	while(1){
		getline(cin, nums_line);
		if(nums_line == "HELP") break;
		vector<long long> arr = split(nums_line);
		getline(cin,ans_line);

		for(size_t i = 0; i < arr.size(); ++i){
			if(ans_line == "YES" && arr[i] <= n){
				m[arr[i]]++;
				mt = max(mt,m[arr[i]]);
			}else{
				m[arr[i]] = -1000;
			}
		}
	}

	for(it = m.begin(); it != m.end(); ++it){
		if((*it).second == mt) cout << (*it).first << " ";
	}

	return 0;
}