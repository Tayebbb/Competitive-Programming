#include<iostream>
using namespace std;
int main()
{
    int a,t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a;
        if(a%3==0)
            cout<<"Second"<<endl;
        else
            cout<<"First"<<endl;
    }
}
