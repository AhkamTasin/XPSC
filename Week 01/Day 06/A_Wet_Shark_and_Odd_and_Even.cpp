#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n;
    cin>>n;
    vector<long long int>a(n);
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());
    if(sum%2==0)
    {
        cout<<sum<<'\n';
    }
    else
    {
        int mi=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]<mi && a[i]%2!=0)
            {
                mi=a[i];
            }
        }
        cout<<sum-mi<<'\n';
    }

    return 0;
}