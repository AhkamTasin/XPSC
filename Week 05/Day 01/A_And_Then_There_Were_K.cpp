//Author: Ahkam_Tasin
//Created: 2024-04-18 19:13:35
//<a href="https://codeforces.com/problemset/problem/1527/A" />
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
        ll ans=1;
        while(ans<=n)
        {
            ans*=2;
        }
        ans/=2;
        ans--;
        cout<<ans<<'\n';
    }
    return 0;
}