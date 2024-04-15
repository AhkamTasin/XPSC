//Author: Ahkam_Tasin
//Created: 2024-04-15 08:30:53
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
        int n,X=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            X^=a[i];
        }
        int ans=X;
        for(int i=0;i<n;i++)
        {
            ans=min(ans,X^a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}