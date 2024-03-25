//Author: Ahkam_Tasin
//Created: 2024-03-25 20:52:46
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
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            int x;
            string s;
            cin>>x>>s;
            for(char c:s)
            {
                if(c=='D' && a[i]==9)
                {
                    a[i]=0;
                }
                else if(c=='D')
                {
                    a[i]++;
                }
                else if(c=='U' && a[i]==0)
                {
                    a[i]=9;
                }
                else if(c=='U')
                {
                    a[i]--;
                }
            }
            
        }
        for(int p:a)
        {
            cout<<p<<" ";
        }
        cout<<'\n';
    }
    return 0;
}