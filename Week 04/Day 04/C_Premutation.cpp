//Author: Ahkam_Tasin
//Created: 2024-04-09 20:19:07
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
        int a[n][n-1];
       
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>a[i][j];
            }
        }
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i][n-2]]++;
        }
        vector<int>ans;
        //map<int,int>m;
        int last;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i][n-2]]==1)
            {
                for(int j=0;j<n-1;j++)
                {
                    ans.push_back(a[i][j]);
                }
            }
            else if(mp[a[i][n-2]]>1)
            {
                last=a[i][n-2];
            }
        }
        ans.push_back(last);
        
        for(int t:ans)
        {
            cout<<t<<" ";
        }
        cout<<'\n';

        
    }
    return 0;
}
