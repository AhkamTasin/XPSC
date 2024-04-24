//Author: Ahkam_Tasin
//Created: 2024-04-24 20:11:27
//<a href="https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(k--)
    {
        int x;
        cin>>x;
        int l=0,r=n-1;
        int ans=n;
        while(l<=r)
        {
            int mid_index=(l+r)/2;
            if(x<=a[mid_index])
            {
                ans=mid_index;
                r=mid_index-1;
            }
            else
            {
                l=mid_index+1;
            }
        }
        cout<<ans+1<<'\n';
    }
    return 0;
}