#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{   int n;
    cin>>n;
    string s;
    cin>>s;
    char x='a';
    transform(s.begin(),s.end(),s.begin(),::tolower);
    if(n>=26)
           {for(int i=0; i<26; i++)
    {
        auto y=find(s.begin(),s.end(),x);
        if(y!=s.end())
            x++;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;}
else
    cout<<"NO"<<endl;
}
