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
        int n;
        char x;
        cin>>n>>x;
        string s;
        cin>>s;
        string y=s;
        y=y+s;

        vector<int> v;
        for(int i=0;i<2*n;i++)
        {
            if(y[i]=='g')
            {
                v.push_back(i);
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(y[i]==x)
            {
                for(int val:v)
                {
                    if(val>i)
                    {
                        cnt=max(cnt,(val-i));
                        break;
                    }
                }
            }
        }
        if(x=='g')
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<cnt<<'\n';
        }
    }
    return 0;
}