//Author: Ahkam_Tasin
//Created: 2024-05-18 11:39:59
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
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cout<<(2*i)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}