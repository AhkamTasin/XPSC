//Author: Ahkam_Tasin
//Created: 2024-06-01 22:00:06
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
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>d(n+1);
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l--,r--;
        d[l]++;
        d[r+1]--;
    }
    for(int i=1;i<=n;i++)
    {
        d[i]=d[i-1]+d[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    sort(d.begin(),d.end(),greater<int>());

    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(1LL *d[i]*a[i]);
    }
    cout<<ans<<'\n';

    return 0;
}