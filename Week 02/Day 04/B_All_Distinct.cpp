//Author: Ahkam_Tasin
//Created: 2024-03-25 10:48:37
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
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<int>b;
        for(int x:a)
        {
            b.insert(x);
        }
        int ans=b.size();
        if((a.size()-b.size())%2!=0)
        {
            ans-=1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}