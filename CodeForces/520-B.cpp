#include <bits/stdc++.h>
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = 0;
    while (b > a)
    {
        if (b % 2 == 0)
        {
            b /= 2;
        }
        else
        {
            b++;
        }
        c++;
    }
    c +=(a-b);
    cout <<c<< endl;
}

int main()
{
    kachao;
    solve();
}
