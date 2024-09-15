#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll p;
    cin>>p;
    ll a,c=0;
    for(ll a=(p+4-1)/4;a<(p+2-1)/2;a++){
        
        ll b=p-(2*a);
        if (b > 0 && a!=b && 2*a>b){
            c++;
        }
    }
    cout<<c<<endl;
}

int main()
{
    kachao;
    solve();
}