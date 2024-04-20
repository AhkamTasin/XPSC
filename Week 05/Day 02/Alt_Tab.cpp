//Author: Ahkam_Tasin
//Created: 2024-04-20 07:01:35
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
    stack<string>s;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        s.push(a);
    }
    set<string>ans;
    while(!s.empty())
    {
        if(ans.find((s.top()))==ans.end())
        {
            ans.insert(s.top());
            string p=s.top();
            if(p.size()>=2)
            {
                cout<<p.substr(p.size()-2);
            }
        }
        s.pop();
    }
    return 0;
}