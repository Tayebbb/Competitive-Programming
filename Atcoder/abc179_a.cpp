#include <iostream>
#include <string>
using namespace std;
#define ll long long int

int main() {
    string s;
    cin>>s;
    if(s[s.size()-1]=='s')
     s+="es";
    else
        s+="s";
    cout<<s<<endl;

}

