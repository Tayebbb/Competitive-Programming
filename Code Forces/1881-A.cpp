#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while (t>0){
        int n,k;
        cin>>n>>k;
        string str,a;
        cin>>str>>a;
        int f=0;
        for(int i=0;i<=5;i++)
        {
          string b=str;
           if (b.find(a)!=string::npos){
                f=1;
                cout<<i<<endl;
                break;}
            str+=str;
            b+=str;
        }
        if (!f)
            cout<<-1<<endl;
        t--;
    }
}
