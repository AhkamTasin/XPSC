#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int cnt=0;
        int ans=0;
        for(int i=n;i>=0;i--)
        {
            cnt++;
            if(cnt<=x)
            {
                ans+=pow(2,i);
            }
            else 
            {
                break;
            }
        }
        cnt=0;
        for(int i=1;i<=n;i++)
        {
            cnt++;
            if(cnt<=(n-x))
            {
                ans-=pow(2,i);
            }
            else 
            {
                break;
            }
        }
        cout<<ans<<'\n';
    }
}
