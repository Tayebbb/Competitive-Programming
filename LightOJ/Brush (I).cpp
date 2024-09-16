#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        int n;
        cin >> n;
        int b = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a > 0) {
                b += a;
            }
            else
                continue;
        }

        cout << "Case " << j << ": " << b << endl;
    }

    return 0;
}
