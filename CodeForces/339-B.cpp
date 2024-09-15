#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    long long int n,m,c=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
        cin>>arr[i];
    for(int i=0;i<m-1;i++)
        if(arr[i]>arr[i+1])
            c++;
    
    cout<<(c*n)+arr[m-1]-1<<endl;
}

