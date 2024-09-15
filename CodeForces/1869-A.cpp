#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,b;
        cin>>n;
        for(ll i = 0 ; i < n ; i++)
            cin>>b;
        
        if(n%2 == 0) {
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else {
            cout<<4<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
    }  

}
