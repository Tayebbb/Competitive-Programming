#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    kachao int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int s, d, k;
        cin >> s >> d >> k;
        int cheese = 0, buns = 0;
        cheese = (s + (2 * d));
        buns = (s * 2) + (d * 2);
        cout << "Case #" << i << ":";
        if ((k + 1 <= buns) && (k <= cheese))
            yes else no
    }
}
