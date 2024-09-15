#include<iostream>
#include<string>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    while(k)
    {
        for(auto i=str.begin(); i<str.end(); i++)
        {
            if(*i=='B' && *(i+1)=='G')
            {
                char temp=*i;
                *i=*(i+1);
                *(i+1)=temp;
                i++;
            }
        }
        k--;
    }
    cout<<str<<endl;
}