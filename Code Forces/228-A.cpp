#include <iostream>
#include <vector>
using namespace std;
int main() {
    int c=0,n=4;
 vector<int>v;
 for(int i=0;i<n;i++)
 {int x;
 cin>>x;
  v.push_back(x);}
  for(int i=0;i<v.size();i++)
   for(int j=i+1;j<v.size();j++)
   if(v[i]==v[j])
     {c++; v.erase(v.begin()+j);
         j--;
     }
    cout<<c<<endl;
}