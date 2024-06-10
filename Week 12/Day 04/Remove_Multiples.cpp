//Author: Ahkam_Tasin
//Created: 2024-06-10 20:22:42
//<a href="https://www.codechef.com/problems/REMOVEMUL" />
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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>a(m);
        ll sum=0;  
        for(ll i=0;i<m;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll x=(n*(n+1))/2;
        cout<<x-sum<<'\n';

    }
    return 0;
}