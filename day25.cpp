#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,flag=0;
        cin>>n;
        if(n==0 || n==1) 
            cout<<"Not prime\n";
        else {
            for(int i=2;i<=sqrt(n);i++) {
                if(n%i==0) {
                    flag=1;
                    break;
                }
            }
            if(flag==1) {
                cout<<"Not prime\n";
                
            }
            else
                cout<<"Prime\n";
        }
    } 
    return 0;
}
