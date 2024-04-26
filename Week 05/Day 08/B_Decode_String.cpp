//Author: Ahkam_Tasin
//Created: 2024-04-26 06:44:35
//<a href="https://codeforces.com/problemset/problem/1729/B" />
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>a(n);
        for(char c:s)
        {
            a.push_back(c-'0');
        }
        vector<char>ans;
        for(int i=0;i<a.size();)
        {
            if(i+2>a.size()-1 || a[i+2]!=0)
            {
                ans.push_back(a[i]-1+'a');
                i++;
            }  
            else
            {
                if(a[i+3]==0 && i+3<a.size())
                {
                    ans.push_back(a[i]-1+'a');
                    i++;
                }
                else
                {
                    int x=a[i]*10+a[i+1];
                    ans.push_back(x-1+'a');
                    i+=3;
                }
            }
            if(ans.back()=='`')
                {
                    ans.pop_back();
                }
        }
        for(char e:ans)
        {
            cout<<e;
        }
        cout<<'\n';
    }
    return 0;
}