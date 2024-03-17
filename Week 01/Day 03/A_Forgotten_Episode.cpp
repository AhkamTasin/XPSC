#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    int frq[n+1]={0};
    for(int i=0;i<n-1;i++)
    {
        frq[a[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(frq[i]==0) cout<<i<<'\n';
    }
    return 0;
}