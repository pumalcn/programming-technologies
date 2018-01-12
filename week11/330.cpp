#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <stdio.h>
#include <sstream>
 
using namespace std;
 
struct point{
    char a[];
    char b[];
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
    int o1 = 0;
    for (int i = 0;i < n - 1;i++){
        int o = (p[i].x + p[i].y + p[i].z) / n;
        if(o1 < )     
    }    
    cout << p[i].a << " " << p[i].b << endl;
    return 0;
}