#include <iostream>
#include <string>
using namespace std;
int main()
{  int f=1,c4=0,c7=0;
    string s;
    cin>>s;
   for(auto it=s.begin();it<s.end();it++)
   {   if(*it=='4')
        c4++;
       if(*it=='7')
        c7++;
       }
   if((c4+c7)==4 || (c4+c7)==7)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;
}
