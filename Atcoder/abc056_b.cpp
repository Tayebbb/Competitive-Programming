#include <iostream>
using namespace std;
int main() {
int w,a,b;
cin>>w>>a>>b;
if((w+a)<=b)
    cout<<b-(w+a)<<endl;
else if((w+b)<=a)
    cout<<a-(w+b)<<endl;
else
   cout<<0<<endl;
}