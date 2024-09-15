#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main()
{
    vector<int>v;
    int n,ma=0,maxi=0,i=1, mi=INT_MAX, mini=0;
    cin>>n;
    int f=n;
    while(n)
    {
        int x;
        cin>>x;
        v.push_back(x);
        if(x>ma)
        {
            ma=x;
            maxi=i;
        }
        if(x<=mi)
        {
            mi=x;
            mini=i;
        }
        i++;
        n--;
    }
if(maxi<mini)
   cout<<(f-mini)+(maxi-1)<<endl;
else
    cout<<(f-mini)+(maxi-1)-1<<endl;
}