//Author: Ahkam_Tasin
//Created: 2024-05-16 22:23:41
//<a href= />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%2==0)
    {
        int x=n/2;
        cout<<x<<'\n';
        while(x--)
        {
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else
    {
        int y=((n-3)/2);
    
        cout<<y+1<<'\n';
        while(y--)
        {
            cout<<2<<" ";
        }
        cout<<3<<'\n';
    }
    return 0;
}