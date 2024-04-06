//Author: Ahkam_Tasin
//Created: 2024-04-06 13:50:26
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
bool valid(int x,int y)
{
    if(x==-1 || y==-1 || x==n || y==m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=LLONG_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ll sum=0;
                sum+=a[i][j];
                int x,y;
                x=i,y=j;
                x--,y--;
                while(valid(x,y))
                {
                    sum+=a[x][y];
                    x--;
                    y--;
                }
                x=i,y=j;
                x++,y--;
                while(valid(x,y))
                {
                    sum+=a[x][y];
                    x++;
                    y--;
                }
                x=i,y=j;
                x--,y++;
                while(valid(x,y))
                {
                    sum+=a[x][y];
                    x--;
                    y++;
                }
                x=i,y=j;
                x++,y++;
                while(valid(x,y))
                {
                    sum+=a[x][y];
                    x++;
                    y++;
                }
                ans=max(ans,sum);
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}