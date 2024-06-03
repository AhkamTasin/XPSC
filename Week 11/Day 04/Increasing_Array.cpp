//Author: Ahkam_Tasin
//Created: 2024-06-03 13:39:14
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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll steps=0;
    for(ll i=1;i<n;i++)
    {
        if(a[i-1]>a[i])
        {
            steps+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
        
    }
    cout<<steps<<'\n';
    return 0;
}
