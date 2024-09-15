#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i < num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll a, b;
    cin >> a >> b;
    vector<int> v;
    ll presum = 0;
    while (a--)
    {
        ll x;
        cin >> x;
        presum += x;
        v.push_back(presum);
    }
    while (b--){
        ll l,r;
        cin>>l>>r;
        ll c;
        if(l!=1)
        c=(v[r-1]-v[l-2]);
        else
        c=v[r-1];
        cout<<c<<endl;
    }
}

int main()
{
    kachao
    solve();
}
