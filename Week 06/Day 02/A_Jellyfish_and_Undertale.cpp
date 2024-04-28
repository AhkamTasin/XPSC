//Author: Ahkam_Tasin
//Created: 2024-04-27 18:11:11
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
        int a,b,n;
    cin>>a>>b>>n;
    vector<int>x(n);
    int c=b;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        c=min(c+x[i],a);
        c--;
    }
    cout<<c<<'\n';
    }
    return 0;
}