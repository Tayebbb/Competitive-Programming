#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve()
{
    ll x, k;
    cin >> x >> k;
    if(x==1 && k==2) yes
    else if (x>1&&k>1) no
    else if (isPrime(x))
        yes else no
}

int main()
{
    kachao;
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
