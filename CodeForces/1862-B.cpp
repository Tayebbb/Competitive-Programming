#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t)
    {
        int n,x=1;
        cin>>n;
        int a[n],b[2*n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        b[0]=a[0];
        if(n!=1)
        {
            for(int i=1; i<n; i++)
                if(a[i-1]<a[i])
                    b[x++]=a[i];
                else if(a[i-1]>a[i])
                {
                    b[x++]=a[i];
                    b[x++]=a[i];
                }
                else
                    b[x++]=a[i];
            cout<<x<<endl;
            for(int i=0; i<x; i++)
                cout<<b[i]<<" ";
        }
        else
            {cout<<"1"<<endl<<a[0]<<" ";}
        cout<<endl;
        t--;
    }
}
