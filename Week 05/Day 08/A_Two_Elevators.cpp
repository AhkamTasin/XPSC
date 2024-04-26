//Author: Ahkam_Tasin
//Created: 2024-04-26 06:13:53
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
        int a,b,c;
        cin>>a>>b>>c;
        int x=abs(a-1);
        int y=abs(b-c)+abs(c-1);
        if(x<y) cout<<1<<'\n';
        else if(y<x) cout<<2<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
}