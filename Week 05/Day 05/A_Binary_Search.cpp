//Author: Ahkam_Tasin
//Created: 2024-04-23 11:54:27
//<a href="https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        int x;
        cin>>x;
        ll l=0;
        ll r=n-1;
        bool ans=false;
        while(l<=r)
        {
            ll mid_index=(l+r)/2;
            if(a[mid_index]==x)
            {
                ans=true;
                break;
            }
            if(x>a[mid_index])
            {
                l=mid_index+1;
            }
            else
            {
                r=mid_index-1;
            }
        }
        if(ans==true)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    return 0;
}