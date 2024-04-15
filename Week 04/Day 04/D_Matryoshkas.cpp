//Author: Ahkam_Tasin
//Created: 2024-04-14 13:02:03
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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a.begin(),a.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int val=a[i];
            if(mp[val]!=0)
            {
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}