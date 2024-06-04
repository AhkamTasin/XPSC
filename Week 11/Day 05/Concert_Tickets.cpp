//Author: Ahkam_Tasin
//Created: 2024-06-04 22:49:14
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
    ll n,m;
    cin>>n>>m;
    multiset<ll>pt;
    for(ll i=0;i<n;i++)
    {
        ll price;
        cin>>price;
        pt.insert(price);
    }
    for(ll i=0;i<m;i++)
    {
        ll pc;
        cin>>pc;
        auto it=pt.upper_bound(pc);
        if(it==pt.begin())
        {
            cout<<-1<<'\n';
            continue;
        }
        else 
        {
            cout<<*(--it)<<'\n';
            pt.erase(it);
        }
    }
    return 0;
}