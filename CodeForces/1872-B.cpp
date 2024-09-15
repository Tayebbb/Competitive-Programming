#include<bits/stdc++.h>
using namespace std;

int main()
{
    short t;
    cin>>t;
    int m=INT_MAX;
    double x,y,n;
    vector<int>v1,v2,v3;
    while(t--)
    {
        m=INT_MAX;
        cin>>n;
        while(n--)
        {
            cin>>x>>y;
            v1.push_back(x);
            v2.push_back(y);
            v3.push_back((x-1)+ceil(y/2));

            if(ceil((x-1)+ceil(y/2))<m)
                m=ceil((x-1)+ceil(y/2));


        }
        cout<<m<<endl;
        v1.clear();
        v2.clear();
        v3.clear();
    }
}



