//Author: Ahkam_Tasin
//Created: 2024-06-05 16:06:40
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
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        bool imp=false;
        int diff=-1,zero_diff=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                imp=true;
                break;
            }
            if(b[i]!=0)
            {
                if(diff==-1)
                {
                    diff=a[i]-b[i];
                }
                else
                {
                    if(a[i]-b[i]!=diff)
                    {
                        imp=true;
                        break;
                    }
                }
            }
            else
            {
                zero_diff=max(zero_diff,a[i]-b[i]);
            }
        }
        if(imp)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        else
        {
            if(diff==-1 || zero_diff<=diff)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }

    }
    return 0;
}
