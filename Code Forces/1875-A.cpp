#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {ll a ,b,n;
    cin>>a>>b>>n;
    ll sum=b;
    while(n--)
    {
        ll x;
        cin>>x;
        if(x+1>a)
        sum+=(a-1);
        else
        sum+=x;
    }
    cout<<sum<<endl;
    }
}