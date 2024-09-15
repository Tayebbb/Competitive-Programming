#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v1,v2;
    int n,x,y;
    cin>>n;
    cin>>x;
    for(int i=0; i<x; i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
    }
    cin>>y;
    for(int i=0; i<y; i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
    }
    for(int i=1; i<=n; i++)
    {
        auto it=find(v1.begin(), v1.end(), i);
        auto it2=find(v2.begin(), v2.end(), i);
        if(it2==v2.end() && it==v1.end())
        {
            cout<<"Oh, my keyboard!"<<endl;
            return 0;
        }
    }
    cout<<"I become the guy."<<endl;
}


