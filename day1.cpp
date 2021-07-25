#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double b;
    string s2;
    
    cin>>a>>b;
    getline(cin>>ws,s2);
    cout<<(i+a)<<endl;
    double c=b+d;
    printf("%.1f", c);
    cout<<endl;
    cout<<s<<s2;

  

    return 0;
}