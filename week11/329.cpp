#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>
 
using namespace std;
 
struct point{
    char a[100];
    char b[100];
    int x;
    int y;
    int z;
};
  int main(){
    int n;
    cin >> n;
    point p[n];
    for(int i = 0;i < n;i++ ){
        cin >> p[i].a >> p[i].b >> p[i].x >> p[i].y >> p[i].z;
    }
    for (int i = 0;i < n;i++){
        if(p[i].x >= 4 && p[i].x <= 5 && p[i].y >= 4 && p[i].y <= 5 && p[i].z >= 4 && p[i].z <= 5){
        	cout << p[i].a << " " << p[i].b << endl;
    }
}    
    return 0;
}