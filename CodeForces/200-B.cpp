
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int n;
  double sum=0;
  cin>>n;
  int i=n;
  while(n)
  {int x;
  cin>>x;
  sum+=x;
  n--;
  }
  sum/=i;
  cout<<setprecision(12)<<sum<<endl;
    return 0;
}