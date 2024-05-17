//Author: Ahkam_Tasin
//Created: 2024-05-17 09:31:09
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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        vector<int>ans;
        for(int i=0;i<n-1;i++)
        {
            ans.push_back(abs(a[i]-a[i+1]));
        }
        int optimal=INT_MAX;
        // alice 1st ney
        if(n>=2)
        {
            optimal=min(optimal,ans[0]);
        }
        // alice last ney
        if(n>=2)
        {
            optimal=min(optimal,ans[n-2]); // n-2 karon ans er size emnitei n-1 , tai last element n-2
        }
        // alice majhe theke element nile
        for(int i=1;i<n-1;i++)
        {
            int mx_diff=max(ans[i-1],ans[i]);
            optimal=min(optimal,mx_diff);
        }
        cout<<optimal<<'\n';
    }
    return 0;
}