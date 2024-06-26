//Author: Ahkam_Tasin
//Created: 2024-04-16 18:11:41
//<a href="https://codeforces.com/problemset/problem/467/B" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0;i<=m;i++)
    {
        cin>>a[i];
    }
    vector<vector<int>>all_mask;
    for(int i=0;i<=m;i++)
    {
        vector<int>v;
        for(int k=0;k<n;k++)
        {
            if((a[i]>>k)&1)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        all_mask.push_back(v);
    }
    int ans=0;
    vector<int>fedor=all_mask[m];
    for(int i=0;i<all_mask.size()-1;i++)
    {
        vector<int>v=all_mask[i];
        int cnt=0;
        for(int k=0;k<n;k++)
        {
            if(fedor[k]!=v[k])
            {
                cnt++;
            }
        }
        if(cnt<=k)
        {
            ans++;
        }
    }

    cout<<ans<<'\n';
    return 0;
}