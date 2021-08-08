#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int d1, m1, y1, d2, m2, y2, mt, dt, yt, t;
    
    cin>>d1>>m1>>y1>>d2>>m2>>y2;

    mt = m1 - m2;
    dt = d1 - d2;
    yt = y1 - y2;
    t=(y1-y2>0)?10000:(m1-m2>0&&yt==0)?mt*500:(d1-d2>0 && yt==0)?dt*15:0;    
    cout<<t<<endl;


    return 0;
}
