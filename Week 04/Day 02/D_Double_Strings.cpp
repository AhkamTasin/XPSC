//Author: Ahkam_Tasin
//Created: 2024-04-06 20:22:13
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
        vector<string>s;
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            string x;
            cin>>x;
            s.push_back(x);
            mp[x]++;
        }
        for(int i=0;i<s.size();i++)
        {
            string nWord=s[i];
            bool ans=false;
            for(int j=0;j<nWord.size();j++)
            {
                string a=nWord.substr(0,j);
                string b=nWord.substr(j,nWord.size());
                if(mp[a]!=0 && mp[b]!=0)
                {
                    ans=true;
                    break;
                }
            }
            cout<<ans;
            
        }
        cout<<'\n';

    }
    return 0;
}



