//Author: Ahkam_Tasin
//Created: 2024-04-24 12:05:19
//<a href="https://codeforces.com/problemset/problem/1843/B" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>a2(n);
        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            cnt+=abs(a[i]);
        }
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                a2.push_back(a[i]);
            }
        }
        bool neg=false;
        ll op=0;
        for(ll i=0;i<a2.size();i++)
        {
            if(neg==false)
            {
                if(a2[i]<0)
                {
                    op++;
                    neg=true;
                }
            }
            if(a2[i]>0)
            {
                neg=false;
            }
        }
        cout<<cnt<<" "<<op<<'\n';
    }
    return 0;
}