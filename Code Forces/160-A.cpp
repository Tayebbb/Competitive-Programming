#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
int main()
{   vector<int>v;
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), greater<int>());
    int s1=0;
for(int i=0;i<n;i++)
{
    s1+=v[i];
    int s2=accumulate(v.begin()+i+1,v.end(),0);

    if(s1>s2)
        {cout<<i+1<<endl;return 0;}
}
}
