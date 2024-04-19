//Author: Ahkam_Tasin
//Created: 2024-04-19 01:36:51
//<a href="https://codeforces.com/problemset/problem/1805/A" />
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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool ans=false;
        for(int x=0;x<=(1<<8);x++)
        {
            int b=0;
            for(int j=0;j<n;j++)
            {
                b^= (a[j]^x);
            }
            if(b==0)
            {
                cout<<x<<'\n';
                ans=true;
                break;
            }
        }
        if(ans==false) cout<<-1<<'\n';
    }
    return 0;
}

