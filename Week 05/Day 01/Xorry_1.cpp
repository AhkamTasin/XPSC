//Author: Ahkam_Tasin
//Created: 2024-04-19 10:42:48
//<a href="https://www.codechef.com/problems/XORRY1" />
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
        int x;
        cin>>x;
        int a=0,b=0;
        int bitpos=0;
        while((1<<bitpos)<=x)
        {
            bitpos++;
        }
        int msb=1<<(bitpos-1);
        a=msb;
        b=a^x;
        cout<<b<<" "<<a<<'\n';
    }
    return 0;
}