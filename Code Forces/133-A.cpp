#include<iostream>
#include<string>
#include<algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main() {
    string s;
    cin >> s;
    for (char ch : s) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            yes;
            return 0;
        }
    }
    no;
}
