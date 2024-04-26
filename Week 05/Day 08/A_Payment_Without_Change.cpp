//Author: Ahkam_Tasin
//Created: 2024-04-26 21:02:18
//<a href="https://codeforces.com/contest/1256/problem/A" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int x=s%n;

        if(x<=b && 1LL*a*n+b>=s) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}