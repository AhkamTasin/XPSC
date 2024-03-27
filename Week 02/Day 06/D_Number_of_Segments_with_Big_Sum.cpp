//Author: Ahkam_Tasin
//Created: 2024-03-27 12:12:37
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    ll s;
    cin>>n>>s;
    vector<ll>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll r=0,l=0,ans=0,sum=0;
    while(r<n)
    {
        sum+=a[r];
        if(sum>=s)
        {
            ans+=n-r;
            while(sum>=s && l<=r)
            {
                sum-=a[l];
                l++;
                if(sum>=s)
                {
                    ans+=n-r;
                }
            }
        }
        r++;
    }
    
    cout<<ans<<'\n';
    return 0;
}