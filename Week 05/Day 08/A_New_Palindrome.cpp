//Author: Ahkam_Tasin
//Created: 2024-04-26 07:24:35
//<a href= />
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
        string s;
        cin>>s;
        map<char,int>mp;
        for(char c:s)
        {
            mp[c]++;
        }
        int cnt=0;
        for(char i='a';i<='z';i++)
        {
            if(mp[i]>=2) cnt++;
        }
        if(cnt>=2) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}