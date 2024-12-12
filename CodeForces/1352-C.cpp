#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define pb push_back
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve()
{ 
  int n,k;
  cin>>n>>k;
  cout<<(k+(k-1)/(n-1))<<endl;
}

int main()
{
    kachao;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
