#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    short t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stringstream ss(s);
        char c;
        int h, m;
        ss >> h >> c >> m;

        string period;
        if (h < 12 || (h == 0 && m == 0)) {
            period = "AM";
            if (h == 0)
                h = 12;
        } else {
            period = "PM";
            if (h != 12)
                h -= 12;
        }

        cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << " " << period << endl;
    }

    return 0;
}
