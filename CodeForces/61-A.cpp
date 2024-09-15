
#include <iostream>
#include <string>
using namespace std;
int main() {
  string s,s1;
  cin>>s>>s1;
  for(auto it=s.begin(), i=s1.begin();it<s.end();it++,i++)
  {if(*it==*i)
     cout<<"0";
   else
   cout<<"1";}
    return 0;
}