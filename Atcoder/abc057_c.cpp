#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long mi =INT_MAX;
    for (long long int i=1; i*i<=n; i++) {
        if (n%i==0) {
            long long int x=i;
            long long int y=n/i;
            long long int ma= max((int)log10(x) + 1, (int)log10(y) + 1);
            mi= min(mi, ma);
        }
    }
    cout<<mi<<endl;
}