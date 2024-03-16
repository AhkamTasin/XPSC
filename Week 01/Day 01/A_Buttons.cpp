#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    if(a!=b)
    {
        int x=max(a,b);
        int c=x-1;
        cout<<x+c<<'\n';
    }
    else if(a==b)
    {
        cout<<a+b<<'\n';
    }
    return 0;
}