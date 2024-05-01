//Author: Ahkam_Tasin
//Created: 2024-05-01 20:13:17
//<a href= />
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
    sort(a.begin(),a.end());

    //lambda function

    auto ok=[&](long long mid)
    {
        long long cnt=0;
        for(int i=(n/2);i<n;i++)
        {
            if(a[i]<mid)
            {
                cnt+=(mid-a[i]);
            }
            else
            {
                cnt+=0;
            }
        }
        return cnt<=k;
    };

    // search interval
    long long l=1,r=2e9,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}



