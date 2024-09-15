#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    int k;
    cin>>k;
    while(k)
    {
        int x;
        cin>>x;
        v.push_back(x);
        k--;
    }
    auto it=find(v.begin(),v.end(),1);
    if(it!=v.end())
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
}

