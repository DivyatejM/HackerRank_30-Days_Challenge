#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    for(int j=N-1;j>=0;j--)
        cout<<a[j]<<" ";
        
    return 0;
}
