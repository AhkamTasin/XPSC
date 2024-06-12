//Starters 103-D
//Author: Ahkam_Tasin
//Created: 2024-06-12 08:36:21
//<a href="https://www.codechef.com/problems/DIVISIBLEBY8" />
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
        string s;
        cin>>n>>s;
        if(n>3)
        {
            char x=s[n-1],y=s[n-2];
            
            int val=+(x-'0');
            int r=val%8;
            int low=(y-'0')*10;
            int up=(y-'0')*10+10;
            int ma=val+(8-r);
            s.pop_back();
            s.pop_back();
            if(ma>=low && ma<up)
            {
                cout<<s<<ma<<'\n';
            }
            else
            {
                int ma2=val-(8-r);
                cout<<s<<ma2<<'\n';
            }
            
        
           
        }
        else
        {
            if(n==1)
            {
                cout<<8<<'\n';
            }
            if(n==2)
            {
                char x=s[n-1],y=s[n-2];
                int val=(y-'0')*10+(x-'0');
                int r=val%8;
                int ma=val+(8-r);
                cout<<ma<<'\n';
            }
            if(n==3)
            {
                char x=s[n-1],y=s[n-2],z=s[n-3];
                int val=(z-'0')*100+(y-'0')*10+(x-'0');
                int r=val%8;
                int ma=val+(8-r);
                cout<<ma<<'\n';
            }
        }


    }
    return 0;
}