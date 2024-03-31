//Author: Ahkam_Tasin
//Created: 2024-03-31 05:09:38
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        list<char>a;
        for(char c:s)
        {
            if(c>='A' && c<='Z')
            {
                c=c+32;
            }
            a.push_back(c);
        }
        a.unique();
        list<char>b={'m','e','o','w'};
        if(a==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}