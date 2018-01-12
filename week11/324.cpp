#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};

double f(point a, point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main(){

	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}
	double g=0;
	for(int i = 0; i < n; ++i){
		for(int j=0; j< n; ++j){
		 double l=f(p[i],p[j]);
		if (g<l)
			g=l;

	}
}
cout << g;
	return 0;
}