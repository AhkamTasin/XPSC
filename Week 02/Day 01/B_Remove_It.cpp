#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,x;
    cin>>n>>x;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        if(y!=x)
        {
            a.push_back(y);
        }
    }
    for(int t:a)
    {
        cout<<t<<" ";
    }
    return 0;
}