//Author: Ahkam_Tasin
//Created: 2024-04-18 15:29:18
//<a href= />
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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int r=0,l=0;
        int ans=0;
        int cnt=0;
        while(r<n)
        {
            if(a[r]%2!=0)
            {
                cnt++;
            }
            if((r-l+1)==k)
            {
                if(cnt>0) ans++;
                if(a[l]%2!=0)
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}