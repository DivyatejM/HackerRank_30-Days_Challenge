#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    
    if((N%2!=0) || ((N%2==0) &&(N>=6 && N<=20) ) )
        cout<<"Weird";
    else
        cout<<"Not Weird";
    return 0;
}
