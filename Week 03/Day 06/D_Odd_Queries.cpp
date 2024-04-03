//Author: Ahkam_Tasin
//Created: 2024-04-03 11:30:34
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll pre[n];
        pre[0]=a[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        while(q--)
        {
            int l,r,k;
            cin>>l>>r>>k;
            l--;
            r--;
            ll u;
            if(l==0)
            {
                u=pre[r];
            }
            else
            {
                u=pre[r]-pre[l-1];
            }
     
            ll x=pre[n-1]-u;
            ll ans=x+k*(r-l+1);
            if(ans%2!=0) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';
        }
    }
    return 0;
}