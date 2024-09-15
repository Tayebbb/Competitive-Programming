#include<iostream>
using namespace std;
int main()
{
    int sum,t;
    cin>>t;
      while(t)
      {
        int a,b,c;
        cin>>a>>b>>c;
        int x=a+c;
        int y=b+c;
        if(x>y)
            cout<<"First"<<endl;
        else if(x<y)
             cout<<"Second"<<endl;
        else if(c%2==0&& x==y)
             cout<<"Second"<<endl;
        else
             cout<<"First"<<endl;
t--;

    }
    }

