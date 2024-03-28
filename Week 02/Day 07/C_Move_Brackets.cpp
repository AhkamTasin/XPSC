//Author: Ahkam_Tasin
//Created: 2024-03-28 15:57:11
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
        int ans=0;
        stack<char> t;
        for(char c:s)
        {
            if(c=='(')
            {
                t.push(c);
            }
            else
            {
                if(t.empty())
                {
                    ans++;
                }
                else if(c==')' && t.top()=='(')
                {
                    t.pop();
                }
                
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}