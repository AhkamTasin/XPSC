//Author: Ahkam_Tasin
//Created: 2024-04-24 10:58:48
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
        int n,q;
        cin>>n>>q;
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(mp.count(x)==0)
            {
                mp[x].first=i;
                mp[x].second=i;
            }
            else
            {
                mp[x].second=i;
            }
        }
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            if(!mp.count(a) || !mp.count(b) || mp[a].first>mp[b].second)
            {
                cout<<"NO"<<'\n';
            }
            else
            {
                cout<<"YES"<<'\n';
            }
        }
    }
    return 0;
}