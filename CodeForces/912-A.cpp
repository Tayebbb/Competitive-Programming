#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int f=1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
                f=0;
                break;
            }
        }

        if (f) {
            cout << "YES" << endl;
        }
         else {
            if (k >= 2) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    t--;}

    return 0;
}
