#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
};
int main()
{
	int n;
	cin >> n;
	point p[n];
	for(int i=0; i < n; i++){
		cin >> p[i].x >> p[i].y;
	}
	float s1 = 0;
	float s2 = 0;
	for(int i=0; i < n; i++){
		s1 = s1 + p[i].x;
		s2 = s2 + p[i].y;
	}
	cout << s1/n << " " << s2/n;
	return 0;
}
