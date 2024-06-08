//starter 110-D
//Author: Ahkam_Tasin
//Created: 2024-06-08 16:57:02
//<a href="https://www.codechef.com/problems/SPCP3?tab=statement" />
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
        int x,y;
        cin>>x>>y;
        int ans=INT_MAX;
        int binimoy=0;
        int a=x,b=y;
        while(a>=1 && b>=1)
        {
            //a komabo
            if(a%b==0)
            {
                ans=min(ans,binimoy);
            }
            a--;
            b++;
            binimoy++;
        }
        a=x,b=y;
        binimoy=0;
        while(a>=1 && b>=1)
        {
            //b komabo
            if(a%b==0)
            {
                ans=min(ans,binimoy);
            }
            b--;
            a++;
            binimoy++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}