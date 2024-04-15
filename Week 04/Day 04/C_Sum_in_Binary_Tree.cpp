//Author: Ahkam_Tasin
//Created: 2024-04-14 08:23:05
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
        ll n;
        cin>>n;
        ll ans=0;
        while(n>0)
        {
            ans+=n;
            n=n/2;
        }
        cout<<ans<<'\n';    
    }
    return 0;
}