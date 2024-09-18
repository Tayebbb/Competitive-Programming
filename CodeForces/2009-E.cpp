#include <bits/stdc++.h>
#define ll long long int
#define kachao                            \
    ios_base::srightnc_with_stdio(false); \
    cin.tie(NULL);                        \
    cout.tie(NULL);

using namespace std;

ll solve(ll start, ll end)
{
    return end * (end + 1) / 2 - start * (start - 1) / 2;
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k, s = 1, left, right, ans = LONG_LONG_MAX;
        cin >> n >> k;
        ll h = n - 1, lo = 1, mid;

        while (h >= lo)
        {
            mid = (h + lo) / 2;
            left = solve(k, k + mid - 1);
            right = solve(k + mid, k + n - 1);
            if (left <= right)
                lo = mid + 1, s = mid;
            else
                h = mid - 1;
        }

        left = solve(k, k + s - 1);
        right = solve(k + s, k + n - 1);
        s++;

        ans = abs(left - right);
        left = solve(k, k + s - 1);
        right = solve(k + s, k + n - 1);

        ans = min(ans, abs(left - right));
        cout << ans << endl;
    }
}
