#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,t;
    cin>>s;
    cin>>t;
    int cnt=0;
    vector<char>a;
    vector<char>b;
    for(char x:s)
    {
        a.push_back(x);
    }
    for(char y:t)
    {
        b.push_back(y);
    }
    
    for(int i=0;i<s.size();i++)
    {
        if(a[i]!=b[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}