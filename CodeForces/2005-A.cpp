#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define all(x) x.begin(), x.end()
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    char palindrome[5] = {'a', 'e', 'i', 'o', 'u'};
    ll n;
    cin >> n;
    string ans="";
    int iterations=n%5;
    vector<int>v(5, n / 5);
    for(int i=0;i<iterations;i++){
       v[i]++;
    }
    for (int i = 0; i < 5; i++) {
        ans += string(v[i], palindrome[i]);
    }
    cout<<ans<<endl;
}

int main()
{
    kachao
        ll t;
    cin >> t;
    while (t--)
        solve();
}
