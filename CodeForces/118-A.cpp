#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0), cout.unsetf(ios::floatfield), cout.precision(10), cout.setf(ios::fixed, ios::floatfield);
using namespace std;

int main() {
    optimize();
    string s, s2;
    cin >> s;

    for (char c : s) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c=='y'||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'|| c=='Y') {
            continue;
        } else {
            if (c >= 'A' && c <= 'Z') {
                c = tolower(c);
            }
            s2 += '.';
            s2 += c;
        }
    }

    cout << s2;
    return 0;
}
