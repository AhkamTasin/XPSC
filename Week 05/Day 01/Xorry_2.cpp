//Author: Ahkam_Tasin
//Created: 2024-04-19 15:24:37
//<a href="https://www.codechef.com/problems/XORRY2" />
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
        int a=1;
        int cnt=0;
        while(a*2<=n)
        {
            a*=2;
            cnt++;
        }
        int ans=1;
        bool check=false;

        for(int i=cnt-1;i>=0;i--)
        {
            if(n&(1<<i))
            {
                check=true;
            }
            else
            {
                if(check)
                {
                    ans*=2;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}