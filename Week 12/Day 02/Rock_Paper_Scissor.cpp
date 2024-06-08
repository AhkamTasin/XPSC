// Starters 107-D
//Author: Ahkam_Tasin
//Created: 2024-06-08 20:13:35
//<a href="https://www.codechef.com/problems/PASCRO" />
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
        string a,b;
        cin>>a;
        cin>>b;
        int w_a=0,w_b=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='R' && b[i]=='S')
            {
                w_a++;
            }
            if(b[i]=='R' && a[i]=='S')
            {
                w_b++;
            }
            if(a[i]=='P' && b[i]=='R')
            {
                w_a++;
            }
            if(b[i]=='P' && a[i]=='R')
            {
                w_b++;
            }
            if(a[i]=='S' && b[i]=='P')
            {
                w_a++;
            }
            if(b[i]=='S' && a[i]=='P')
            {
                w_b++;
            }

        }

        int ans=0;
        while(w_a<=w_b)
        {
            w_a++;
            w_b--;
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}