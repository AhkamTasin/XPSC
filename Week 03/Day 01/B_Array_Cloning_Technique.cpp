//Author: Ahkam_Tasin
//Created: 2024-03-29 10:58:45
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
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>mp;
        for(int b:a)
        {
            mp[b]++;
        }
        int mx=INT_MIN;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mx=max(mx,it->second);
        }
        int baki=n-mx;
        int clone=0;
        int move=0;
        while(baki!=0)
        {
            clone++;
            move+=min(mx,baki);
            baki-=min(mx,baki);
            mx*=2;
        }
        cout<<clone+move<<'\n';
    }
    return 0;
}