#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int t,c=1;
    cin>>t;
    while(t)
    {
        int x;
        cin>>x;
        v.push_back(x);
        t--;
    }
    for(int i=0;i<v.size()-1;i++)
        if (v[i]!=v[i+1])
           c++;
   cout<<c<<endl;
}