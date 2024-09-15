#include<iostream>
using namespace std;
int main()
{
    int n,sum,t;
    cin>>t;
     while(t)
      {sum=0;
      cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
            {cin>>a[j];
            sum+=a[j];}

           if(sum%2==0)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
            t--;
    }
    }
