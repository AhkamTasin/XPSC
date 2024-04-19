//Author: Ahkam_Tasin
//Created: 2024-04-19 06:38:29
//<a href="https://codeforces.com/problemset/problem/1421/A" />
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
        int a,b;
        cin>>a>>b;
        int x=a^b;
        cout<<x<<'\n';
    }
    return 0;
}