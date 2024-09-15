#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{  string s,s1,c;
   cin>>s>>s1;
   c=s;
   reverse(c.begin(),c.end());
   if(c==s1)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

}
