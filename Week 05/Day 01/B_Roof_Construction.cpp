//Author: Ahkam_Tasin
//Created: 2024-04-19 21:56:16
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
        int h=log2(n-1);
        int st=1<<h;
        for(int i=n-1;i>=st;i--)
        {
            cout<<i<<" ";
        }
        for(int i=0;i<st;i++)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}