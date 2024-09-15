#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>v,v2;
        ll min1=LONG_MAX,min2=LONG_MAX,sum=0,sum2=0,j=n;
        while(n--)
        {
            ll a;
            cin>>a;
            v.push_back(a);
            sum+=a;
            if(a<min1)
                min1=a;

        }

        while(j--)
        {
            ll a;
            cin>>a;
            v2.push_back(a);
            sum2+=a;
            if(a<min2)
                min2=a;
        }
        sum+=(min2)*v.size();
        sum2+=min1*v.size();
        if(sum<sum2)
            cout<<sum<<endl;
        else
            cout<<sum2<<endl;
    }
}
