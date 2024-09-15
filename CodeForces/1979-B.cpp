#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
//XOR sequences
int main()
{
    kachao
    ll t;
    cin>>t;
    while (t--)
    {
        ll x,y,c=1,i=0;
        cin>>x>>y;
        while(1)
        {
            if(x%2!=y%2)
                break;
            else
                x>>=1;
            y>>=1;
            c<<=1;
        }
        cout<<c<<endl;
    }
}
