//Author: Ahkam_Tasin
//Created: 2024-06-11 19:20:36
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
        int ans=0;
        
        for(int i=0;i<s.size();)
        {
            int cnt=0;
            if(s[i]==':')
            {
                i++;
                while(s[i]==')')
                {
                    i++;
                    cnt++;
                }
                if(s[i]==':' && cnt>0)
                {
                    ans++;
                }
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}