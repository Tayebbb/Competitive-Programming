#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool lucky(int n){
     while(n)
    {
        ll a=n%10;
        n/=10;
        if(a!=4 && a!=7)
         return false;

    }
    return true;
}


int main()
{
    kachao
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
    if(n%i==0 && lucky(i)){
       yes
       return 0;}
    }
   no
    }

