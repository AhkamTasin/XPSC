// Ei same syntex amra binary search er problem e use korbo


//Author: Ahkam_Tasin
//Created: 2024-05-01 09:35:17
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


    // eta holo lambda function za binary search e use hobe
    auto ok=[&](long long m)
    {
        long long total=0;
        for(int i=0;i<n;i++)
        {
            total+=(m/a[i]);
            if(total>=t)
            {
            return true;
            }
        }
        return false;
    };


    //search interval:
    long long l=1,r=1e18;
    long long mid,ans;
    while(l<=r)
    {
        mid=(r+l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }   
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<'\n';    

    return 0;
}

