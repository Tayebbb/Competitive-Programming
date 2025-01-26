#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n, x, sum = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 1)
            c1++;
        else if (v[i] == 2)
            c2++;
        else if (v[i] == 3)
            c3++;
        else if (v[i] == 4)
            c4++;
    }
    sum = c4;
    sum += c3;
    if (c1 >= c3)
        c1 -= c3;
    else
        c1 = 0;
    sum += c2 / 2;
    c2 %= 2;
    if (c2 == 1)
    {
        sum += 1;
        c1 = max(0LL, c1 - 2);
    }
    sum += c1 / 4;
    if (c1 % 4 != 0)
        sum += 1;
    cout << sum ;
}
