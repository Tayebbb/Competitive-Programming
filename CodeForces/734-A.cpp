#include <iostream>
#include<string>
using namespace std;
int main()
{   int a=0,d=0,n;
    string s;
    cin>>n>>s;
    for(auto i=s.begin();i<s.end();i++)
        {if(*i=='A')
        a++;
        else
        d++;}
        if(a>d)
            cout<<"Anton"<<endl;
        else if(a==d)
            cout<<"Friendship"<<endl;
        else
            cout<<"Danik"<<endl;
}

