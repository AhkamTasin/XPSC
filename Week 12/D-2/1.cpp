#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int h,x,y;
        cin>>h>>x>>y;
        int a=h/x;
        if(h%x>0) 
        {
            a++;    
        }
    
        int e=h-y;
        int b=e/x;
        if(e%x>0)
        {
            b++;
        }
        b++;
        cout<<min(a,b)<<'\n';
    }
}