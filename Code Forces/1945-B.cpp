#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)  //1 2 3    6
    {
        long long a,b,m;
        cin>>a>>b>>m;
        cout<<(m/a)+(m/b)+2<<endl;
    }
}