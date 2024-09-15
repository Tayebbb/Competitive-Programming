#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        int a[n],b[n],c[n],co=0,ce=0,maxi=0;
        int x=0,y=0,f=0;
        for (int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
                ce++;
            else
                co++;
            if(a[i]>maxi)
                maxi=a[i];

        }
        if(ce==n)
            for(int i=0; i<n; i++)
            {
                if(a[i]==maxi)
                    c[y++]=a[i];
                else
                    b[x++]=a[i];
            }
        else if(co==n)
            for(int i=0; i<n; i++)
            {
                if(a[i]==1)
                    b[x++]=a[i];
                else
                    c[y++]=a[i];
            }
        else
        for(int i=0; i<n; i++)
            { if(a[i]%2==0)
               c[y++]=a[i];
              else
                b[x++]=a[i];}
         if (x==0||y==0)
            cout<<-1<< endl;
         else {
            cout<<x<<" "<<y<<endl;
            for(int i=0;i<x;i++)
                cout<<b[i]<<" ";
            cout<<endl;
            for (int i=0;i<y;i++)
                cout << c[i] << " ";
            cout<<endl;  }
            t--;
    }

}
