//Author: Ahkam_Tasin
//Created: 2024-04-26 19:29:07
//<a href="https://codeforces.com/problemset/problem/1380/A" />
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
        bool flag=false;
        for(int i=0;i<=a.size()-3;i++)
        {
            if(a[i]<a[i+1] && a[i+1]>a[i+2])
            {
                cout<<"YES"<<'\n';
                cout<<i+1<<" "<<i+2<<" "<<i+3<<'\n';
                flag=true;
                break;
            }
        }
        if(flag==false) cout<<"NO"<<'\n';
    }
    return 0;
}