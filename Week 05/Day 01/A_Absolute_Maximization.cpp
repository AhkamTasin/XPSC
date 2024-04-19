//Author: Ahkam_Tasin
//Created: 2024-04-19 22:22:02
//<a href="https://codeforces.com/problemset/problem/1763/A" />
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
        int x=INT_MAX;
        int y=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            x&=a;
            y|=a;
        }
        cout<<y-x<<'\n';
    }
    return 0;
}