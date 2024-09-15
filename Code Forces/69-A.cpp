#include <iostream>
#include<vector>
#include<numeric>
using namespace std;
int main()
{

    int n,sum=0,f=1;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
        for(int j=0;j<3;j++)
            cin>>arr[i][j];
   for(int j=0;j<3;j++)
     {for(int i=0;i<n;i++)
        sum+=arr[i][j];
    if(sum!=0)
        {f=0;
        break;}}
if(f)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
