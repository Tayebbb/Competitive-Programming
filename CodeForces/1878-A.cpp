#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n,k,f=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
    for(int i=0;i<n;i++)
          {if(a[i]==k)
            {f=1;
            break;}}
         if(f)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;


        t--;
    }
}
