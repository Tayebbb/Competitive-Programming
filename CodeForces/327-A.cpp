#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int num, flip=0, one=0 ,maxFlip=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>num;
        if(num==0)
        {
            flip++;
        }
        else
        {
            flip--;
            one++;

        }
        if(flip>maxFlip) maxFlip=flip;
        if(flip<0) flip=0;
    }
    cout<<maxFlip+one<<endl;
}
