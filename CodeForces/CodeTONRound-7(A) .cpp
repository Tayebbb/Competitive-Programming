#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n, min=INT_MAX;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {cin>>a[i];
        if(a[i]<min)
        min=a[i];}
        if(a[0]==min)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;

        t--;
    }
}
