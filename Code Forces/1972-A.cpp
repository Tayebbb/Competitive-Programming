#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        ll n,c=0;
        cin>>n;
        vector<int>a,b;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                for(int j=n-1; j>i; j--)
                {
                    a[j]=a[j-1];
                }
                a[i]=b[i];
                c++;
            }

        }
        cout<<c<<endl;
    }


}
