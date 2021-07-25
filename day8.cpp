#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<string ,string> person;
    while(n--) {
        string name,number;
        cin>>name;
        cin>>number;
        person[name]=number;
    }
    map<string,string>::iterator it;
    string query;
    while( cin >> query )   {
        it = person.find(query);
        if (it != person.end()) 
            cout<<it->first<<"="<<it->second<<'\n';
        else
            cout<<"Not found"<<'\n';
    }
    return 0;
}
