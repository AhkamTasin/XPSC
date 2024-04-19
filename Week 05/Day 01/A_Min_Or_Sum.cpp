//Author: Ahkam_Tasin
//Created: 2024-04-19 06:27:21
//<a href="https://codeforces.com/problemset/problem/1635/A" />
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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans|=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}