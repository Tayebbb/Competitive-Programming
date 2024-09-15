#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long int
#define kachao ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    kachao
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin>>n>>m;
        ll arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
                cin>>arr[i][j];
        }
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {

                vector<ll> neighbors;
                if (j > 0)
                    neighbors.push_back(arr[i][j-1]);
                if (i > 0)
                    neighbors.push_back(arr[i-1][j]);
                if (i<n-1)
                neighbors.push_back(arr[i+1][j]);
                if (j<m-1)
                neighbors.push_back(arr[i][j+1]);
                neighbors.push_back(arr[i][j]);
                sort(neighbors.begin(), neighbors.end(), greater<ll>());
                ll maxi = neighbors[0];
                ll smaxi=neighbors[1];
                if(arr[i][j]==maxi)
                    arr[i][j]=smaxi;
                neighbors.clear();
            }
        }

         for(int i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
               cout<<arr[i][j]<<' ';
               cout<<endl;
        }


    }
    return 0;
}
