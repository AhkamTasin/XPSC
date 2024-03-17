#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,c;
    cin>>a>>b>>c;
    bool cnt=false;
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if(a*i+b*j==c)
            {
                cnt=true;
                break;
            }
        }
    }
    if(cnt==false) cout<<"No"<<'\n';
    else cout<<"Yes"<<'\n';
    return 0;
}
