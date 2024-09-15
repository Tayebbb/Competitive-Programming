#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int main() {
    kachao
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num) {
        ll A, B, C;
        cin >> A >> B >> C;

        // If the budget is less than the cost of one cheeseburger, output 0
        if (A > C) {
            cout << "Case #" << case_num << ": 0" << endl;
            continue;
        }

        ll max_cheeseburgers = 0;

        // Try every number of cheeseburgers you could potentially buy
        for (ll k = 0; k <= C / A; ++k) {
            ll cost = k * A + (k - 1) * B;
            if (cost <= C) {
                max_cheeseburgers = max(max_cheeseburgers, k);
            }
        }

        cout << "Case #" << case_num << ": " << max_cheeseburgers << endl;
    }

    return 0;
}
