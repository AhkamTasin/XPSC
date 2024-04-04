//Author: Ahkam_Tasin
//Created: 2024-04-04 13:14:11
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
        set<int>b;
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            b.insert(a[i]);
            cnt++;
    
            if(b.size()!=cnt)
            {
                break;
            }
        }
        cout<<n-b.size()<<'\n';
    }
    return 0;
}