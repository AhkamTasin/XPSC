//Author: Ahkam_Tasin
//Created: 2024-05-05 20:00:27
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<b.size();j++)
        {
            if(a[i]==b[j] || a[i]==b[j]+1 || a[i]+1==b[j])
            {
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}