#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
using namespace std;

int main()
{   int x;
    short t,c=0;
    vector<int>v;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int maxi=v[0];
    int mini=v[0];
    for(int i=0;i<t;i++)
    {
       if(v[i]>maxi)
        {
            maxi=v[i];
            c++;
        }
        else if(v[i]<mini)
        {
            mini=v[i];
            c++;
        }
    }
    cout<<c<<endl;
}