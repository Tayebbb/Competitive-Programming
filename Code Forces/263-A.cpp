#include<iostream>
#include<string>
using namespace std;
int main(){
    int a[5][5],x=0,b=0;
    for(int i=0;i<5;i++)
        {for(int j=0;j<5;j++)
           {cin>>a[i][j];
           if(a[i][j]!=0)
           {
               x=i;
               b=j;
           }}}
        x-=2;
    if(x<0)
            x*=-1;
        b-=2;
        if(b<0)
            b*=-1;
        x+=b;
    cout<<x<<endl;
}
