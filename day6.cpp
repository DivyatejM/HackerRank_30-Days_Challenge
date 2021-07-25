#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string even,odd;
        for(int i=0;i<s.length();i++) {
            if(i%2==0)
                even=even+s[i];
            else
                odd=odd+s[i];
        }
        cout<<even<<" "<<odd<<endl;
    }
      
    return 0;
}
