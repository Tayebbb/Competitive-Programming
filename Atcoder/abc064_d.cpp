#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int o=0, close=0;
    for(char c:s)
    {
        if(c=='(')
            o++;
        else if(o>0)
            o--;
        else
            close++;
    }
    while(close--)
        cout<<"(";
    cout<<s;
    while(o--)
         cout<<")";
}

