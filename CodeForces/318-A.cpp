#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

using namespace std;
int main()
{   long long sum;
    long long n,k;
    cin>>n>>k;
if(n%2==0)
    n/=2;
else
    n=(n/2)+1;
if(n>=k)
    {sum=1;
    for(long long i=2;i<=k;i++)
        sum+=2;}
if(n<k)
{   sum=0;
    for(long long i=n;i<k;i++)
        sum+=2;}
cout<<sum<<endl;
}