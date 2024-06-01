//Author: Ahkam_Tasin
//Created: 2024-06-01 23:12:37
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
    int q;
    cin>>q;
    map<int,int>d;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        
        d[l]++;
        d[r+1]--;
    }
    int sum=0;
    bool ans=true;
    for(auto [x,y]:d)
    {
        sum+=y;
        if(sum>2)
        {
            ans=false;
            break;
        }
    }
    if(ans) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}