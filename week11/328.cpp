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
    double o1 = 0;
    double o2 = 0;
    double o3 = 0;
    for (int i = 0;i < n;i++){
        o1 = o1 + p[i].x;
        o2 = o2 + p[i].y;
        o3 = o3 + p[i].z;
    }
    
    cout << o1 / n << " " << o2 / n << " " << o3 / n;
    return 0;
}