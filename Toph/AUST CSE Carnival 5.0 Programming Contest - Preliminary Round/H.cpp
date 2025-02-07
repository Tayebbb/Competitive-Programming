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
    int n;
    string s;
    cin >> n >> s;
    int counta = 0, countb = 0, countc = 0;
    for (char ch : s)
    {
        if (ch == 'A')
            counta++;
        else if (ch == 'B')
            countb++;
        else if (ch == 'C')
            countc++;
    }
    cout << min({counta, countb, countc}) << endl;
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
