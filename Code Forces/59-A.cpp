#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    int o=0,b=0;
    string s;
    cin>>s;
    for(auto it=s.begin(); it<s.end(); it++)
    {
        if (*it>='a' && *it<='z')
            o++;
        else
            b++;
        }
    if(o>=b)
       transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
       transform(s.begin(), s.end(), s.begin(), ::toupper);
       cout<<s<<endl;
}
