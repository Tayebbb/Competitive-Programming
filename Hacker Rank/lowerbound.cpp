#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
  int n;
  cin>>n;
  vector<int>v(n);
  for(auto &x:v) cin>>x;
  int q;
  cin>>q;
  while(q--){
    int a;
    cin>>a;
    auto it = lower_bound(v.begin(), v.end(), a);
    if(*it==a) cout<<"Yes "<<it-v.begin()+1<<endl;
    else cout<<"No "<<it-v.begin()+1<<endl;
  }
}

int main()
{
    kachao;
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
