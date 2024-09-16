#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        int a,b=0;
        cin >> a;
        if(a<10)
           cout<<a<<" "<<b<<endl;
        else
        {
            b=10;
            cout<<a-b<<" "<<b<<endl;
        }

    }

    return 0;
}
