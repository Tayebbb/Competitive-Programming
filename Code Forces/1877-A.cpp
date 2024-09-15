#include<iostream>
using namespace std;
#include<limits.h>
int main()
{
    int n,sum,t;
cin>>t;
      while(t)
      {sum=0;
      cin>>n;
        int a[n];
        for(int j=0; j<n-1; j++)
            {cin>>a[j];
            sum+=a[j];}

            cout<<sum*-1<<endl;
            t--;}
    }

