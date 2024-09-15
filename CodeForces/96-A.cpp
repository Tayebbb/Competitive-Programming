#include<iostream>
#include<string>
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=1;
    for(auto i=s.begin();i<s.end();i++)
    {
        if(*i==*(i+1))
            {c++;
        if(c==7)
            {yes;
            return 0;}}
        else
            c=1;
    }
    no;
}