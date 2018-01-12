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


	double m = 0;

	for(int i = 0; i < n - 2; ++i){
		for(int j=i + 1;j < n - 1; ++j){
			for(int k=i + 2;k < n; ++k){
                 double P = (f(p[i],p[j]) + f(p[k],p[j]) + f(p[i],p[k])) / 2;
                 double S = sqrt(P*(P-f(p[i],p[j]))*(P-f(p[k],p[j]))*(P-f(p[i],p[k])));
                 if(S > m){
                 	S = m;
                 }
			}
		}
	}	
    printf("%0.15f",S);
	return 0;
}