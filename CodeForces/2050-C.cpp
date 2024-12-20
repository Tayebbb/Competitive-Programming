#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define pb push_back
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

void solve()
{
    string s;
    cin >> s;

    int c2 = 0, c3 = 0, sum = 0;

    for (char ch : s)
    {
        int digit = ch - '0';
        if (digit == 2)
            c2++;
        if (digit == 3)
            c3++;
        sum += digit;
    }

    if (sum % 9 == 0)
    {
        yes
        return;
    }

    for (int i = 0; i <= c2; i++)
    {
        for (int j = 0; j <= c3; j++)
        {
            if ((sum + i * 2 + j * 6) % 9 == 0)
            {
                yes
                return;
                
            }
        }
    }

    no
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
