#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve()
{
    int a, b, c, ans = 0;
    cin >> a >> b >> c;
    if (a == 1)
    {
        ans = a + b;
        if (c == 1)
            ans += c;
        else
            ans *= c;
    }
    else if (b == 1)
    {
        if (a > c)
        {
            ans = b + c;
            ans *= a;
        }
        else
        {
            ans = a + b;
            if (c == 1)
                ans += c;
            else
                ans *= c;
        }
    }
    else 
    {
        if (c == 1)
            ans = a * (b + c);
        else
            ans = a * b * c;
    }
    cout << ans << endl;
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
