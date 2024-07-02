#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a;
        for(int i=n/2;i<n;i++)
        {
            a.push_back(i+1);
        }
        for(int i=0;i<(n/2);i++)
        {
            a.push_back(i+1);
        }
        for(int i=0;i<n;i++)
        {
            cout<<i+1<<" ";
        }
        cout<<'\n';
        for(int x:a)
        {
            cout<<x<<" ";
        }
        cout<<'\n';
    }

}