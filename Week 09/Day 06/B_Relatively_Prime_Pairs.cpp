//Author: Ahkam_Tasin
//Created: 2024-05-23 20:52:14
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l,r;
    cin>>l>>r;
    ll a=l,b=l+1;
    cout<<"YES"<<'\n';
    while(b<=r)
    {
        cout<<a<<" "<<b<<'\n';
        a+=2;
        b+=2;
    }
    return 0;
}