#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int col;
        cin>>col;
        string a;
        string b;
        cin>>a;
        cin>>b;
        vector<char> x(col);  
        vector<char> y(col);
        for(char c:a)
        {
            x.push_back(c);
        }  
        for(char d:b)
        {
            y.push_back(d);
        }
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='G' && y[i]=='B')
            {
                x[i]='B';
            }
            else if(x[i]=='B' && y[i]=='G')
            {
                y[i]='B';
            }
        }
        if(x==y) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}