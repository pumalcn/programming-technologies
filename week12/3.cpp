#include <iostream>
#include <vector>

using namespace std;

struct student{
	string name;
	double gpa;
};

int main(){

	vector<student> v;

	student a;
	a.name = "A";
	a.gpa = 3;


	student b;
	b.name = "B";
	b.gpa = 4;

	v.push_back(a);
	v.push_back(b);


	for(int i = 0; i < v.size(); ++i){
		cout << v[i].name << " " << v[i].gpa << endl;
	}

	return 0;
}