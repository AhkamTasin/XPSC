//Author: Ahkam_Tasin
//Created: 2024-06-07 21:04:49
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
        int a,b;
        cin>>a>>b;
        int x=max(a,b);
        int y=min(a,b);
        if(y*2<x) cout<<"NO"<<'\n';
        else if(y*2==x) cout<<"YES"<<'\n';
        else if(x%3==0 && y%3==0 || x%3==1 && y%3==2 || x%3==2 && y%3==1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}