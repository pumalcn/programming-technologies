#include <iostream>
#include <set>

using namespace std;

struct student{
	string name;
	double gpa;
};

struct comparator {
	bool operator() (student x, student y){
		if(x.gpa < y.gpa) return true;
		return false;
	}
};

struct comparator2 {
	bool operator() (student x, student y){
		if(x.name > y.name) return true;
		return false;
	}
};

int main(){

	set<student,comparator2> v;
	student a;
	a.name = "A";
	a.gpa = 3;


	student b;
	b.name = "B";
	b.gpa = 4;

	v.insert(a);
	v.insert(b);


	set<student,comparator2>::iterator it;
	for(it = v.begin(); it != v.end(); ++it){
		student t = *it;
		cout << t.name << " " << t.gpa << endl;
	}

	return 0;
}