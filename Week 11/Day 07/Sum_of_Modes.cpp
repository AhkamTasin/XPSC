//Author: Ahkam_Tasin
//Created: 2024-06-06 17:35:26
//<a href= />
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int v=0;
        map<int,int>sum;
        sum[0]++;

        ll ans=n*1LL*(n+1)/2;

        for(auto x:s)
        {
            if(x=='1')
            {
                v++;
            }
            else
            {
                v--;
            }
            ans+=sum[v]++;
        }
        cout<<ans<<'\n';

    }
    return 0;
}
