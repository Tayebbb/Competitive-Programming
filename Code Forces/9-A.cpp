#include <iostream>
using namespace std;
int main() {
    int x,y;
    cin>>x>>y;
    int max=(x>y)?x:y;
    max=7-max;
    switch(max)
    {case 1: cout<<"1/6"<<endl; break;
     case 2: cout<<"1/3"<<endl;break;
     case 3: cout<<"1/2"<<endl; break;
     case 4: cout<<"2/3"<<endl;break;
     case 5: cout<<"5/6"<<endl; break;
     case 6: cout<<"1/1"<<endl;break;}
}