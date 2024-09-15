#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{ int t,a,b;
  string s;
  cin>>t;
  while(t)
  {  a=0,b=0;
      cin>>s;
      for(auto i=s.begin(); i<s.end();i++)
      {
          if(*i=='A')
            a++;
          else
            b++;
      }
      if(a>b)
        cout<<"A"<<endl;
      else
        cout<<"B"<<endl;
      t--;
  }


}