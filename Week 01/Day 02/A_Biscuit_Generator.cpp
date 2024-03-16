#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b,t;
    cin>>a>>b>>t;
    int cnt=0;
    for(int i=1;i<=20;i++)
    {
        int x=a*i;
        if(x<=t)
        {
            cnt++;
        }
    }
    cout<<b*cnt<<'\n';
    return 0;
}