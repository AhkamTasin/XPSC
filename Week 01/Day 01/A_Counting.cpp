#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    int c=b-a;
    if(c<0)
    {
        cout<<0<<'\n';
    }
    else
    {
        cout<<c+1<<'\n';
    }
    return 0;
}