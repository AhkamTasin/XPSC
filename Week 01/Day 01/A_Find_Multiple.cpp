#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin>>a>>b>>c;
    int ans;
    bool t=false;
    for(int i=1;i<=1000;i++)
    {
        int x=c*i;
        if(x>=a && x<=b)
        {
            t=true;
            ans=x;
            break;
        }
    }
    if(t==true)
    {
        cout<<ans<<'\n';
    }
    else
    {
        cout<<-1<<'\n';
    }
    return 0;
}