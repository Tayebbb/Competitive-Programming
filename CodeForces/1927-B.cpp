#include<bits/stdc++.h>
using namespace std;
int main()
{
    short t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        while(n--)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int j=0;
        int alphabets[26]= {0};
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0)
            {
                cout<<char('a'+(j));
                alphabets[j]++;
                j++;

            }
            else
                for(int x=0;x<26;x++)
                {
                    if(alphabets[x]<=v[i])
                    {
                        cout<<char('a'+(x));
                        alphabets[x]++;

                        break;
                    }
                }
        }
        cout<<endl;
        v.clear();
    }
}