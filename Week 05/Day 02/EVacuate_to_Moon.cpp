//Author: Ahkam_Tasin
//Created: 2024-04-20 07:43:21
//<a href="https://www.codechef.com/problems/MOONSOON" />
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());

        long long int ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ans+=min(1LL*b[i]*h,1LL*a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}