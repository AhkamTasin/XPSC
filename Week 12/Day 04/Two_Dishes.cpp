//Author: Ahkam_Tasin
//Created: 2024-06-10 09:39:36
//<a href="https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/TWODISH" />
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
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int ans=0;
        int x=b;
        if(x>=a) 
        {
            ans+=a;
            x-=a;
        }
        else
        {
            ans+=x;
            x=0;
        }
        if(x>=c)
        {
            ans+=c;
            x-=c;
        }
        else
        {
            ans+=x;
            x=0;
        }
        if(ans>=n)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}