#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n;
    cin>>n>>s;
    for(auto it=s.begin();it<s.end();it++)
        {if(*it==*(it+1))
    {it=s.erase(it);
     it--;}}
    cout<<n-s.size()<<endl;
}
