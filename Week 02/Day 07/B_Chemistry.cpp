//Author: Ahkam_Tasin
//Created: 2024-03-28 16:46:52
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>tm;
        for(char c:s)
        {
            tm[c]++;
        }
        int odd=-1;
        for(auto it=tm.begin();it!=tm.end();it++)
        {
            if((it->second)%2!=0)
            {
                odd++;
            }
        }
        if(odd>k) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}