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
        int a,b;
        cin>>a>>b;
        int x=max(a,b);
        int y=min(a,b);
        if(y*2<x) cout<<"NO"<<'\n';
        else if(y*2==x) cout<<"YES"<<'\n';
        else if(x%3==0 && y%3==0 || x%3==1 && y%3==2 || x%3==2 && y%3==1) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}