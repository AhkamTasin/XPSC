//Author: Ahkam_Tasin
//Created: 2024-04-19 19:17:19
//<a href="https://www.codechef.com/problems/CS2023_PON?tab=statement" />
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
        int n,b;
        cin>>n>>b;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        // Super Mash check kortesi....
        int And=-1;
        for(int i=0;i<n;i++)
        {
            if((a[i]&b)==b)
            {
                And&=a[i];
            }
        }
        if(And==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}