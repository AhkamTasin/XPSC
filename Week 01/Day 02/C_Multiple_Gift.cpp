#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int x,y;
    cin>>x>>y;
    int cnt=1;
    while(x*2<=y)
    {
        
        cnt++;
        x=x*2;
    
    }
    cout<<cnt<<'\n';
    return 0;
}