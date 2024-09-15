#include <iostream>
#include <string>
using namespace std;
int main() {
 int n,x,c=0;
 cin>>n>>x;
 while(1)
 { if(n>x)
    break;
   else
    {n*=3;
     x*=2;
     c++;}}
     cout<<c<<endl;
 }

