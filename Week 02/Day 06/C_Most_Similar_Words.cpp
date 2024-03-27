//Author: Ahkam_Tasin
//Created: 2024-03-27 19:17:35
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
        int n,m;
        cin>>n>>m;
        vector<string>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff=0;
                for(int k=0;k<m;k++)
                {
                    diff+=(abs(a[i][k]-a[j][k]));
                }
                ans=min(ans,diff);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}