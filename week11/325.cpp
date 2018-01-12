#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct point{
	double x;
	double y;
};

double f(point a, point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

bool c(point a, point b){
	point p0;
	p0.x = 0;
	p0.y = 0;

	double l1 = f(a,p0);
	double l2 = f(b,p0);
	if(l1 < l2) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	sort (p,p + n,c);

	for(int i = 0; i < n; ++i){
		cout << p[i].x << " " << p[i].y << endl;
	}

	return 0;
}
/*#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};

double f(point a, point b){
	return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}
bool c(point a, point b){
	point p0;
	p0.x = 0;
	p0.y = 0;

	double l1 = f(a,p0);
	double l2 = f(b,p0);
	if(l1 < l2) return true;
	return false;
}

int main(){

	int n;
	cin >> n;
	point p[n];

	for(int i = 0; i < n; ++i){
		cin >> p[i].x >> p[i].y;
	}

	sort(p,p+n,c);

	for(int i = 0; i < n; ++i){
		cout << p[i].x << " " << p[i].y << endl;
	}

	return 0;
}*/
