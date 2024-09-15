#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long long> v;
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, f, a, b,in=0;
        bool p= true;
        cin >> n >> f >> a >> b;
        while (n--)
        {
            long long x;
            cin >> x;
            v.push_back(x);
            long long c = (x - in) * a;
            if (c < b)
                f -= c;
            else
                f -= b;
            in = x;
            if (f <= 0)
            {
                p = false;
            }
        }
        if (p)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        v.clear();
    }
}



