//Author: Ahkam_Tasin
//Created: 2024-04-13 11:10:47
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
        priority_queue<int>s;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0)
            {
                s.push(a[i]);
            }
            if(a[i]==0 && !s.empty())
            {
                ans+=s.top();
                s.pop();
            }
        }
        cout<<ans<<'\n';

    }
    return 0;
}