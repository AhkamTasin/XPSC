#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    
    vector<int>b;

    
    for(int i=2;i<=n;i+=2)
    {
        b.push_back(i);
    }
    for(int i=1;i<=n;i+=2)
    {
        b.push_back(i);
    }
    
    bool ans=true;
    for(int i=0;i<b.size()-1;i++)
    {
        if(abs(b[i]-b[i+1])==1)
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        for(int c:b)
        {
            cout<<c<<" ";
        }
        cout<<'\n';
    }
    else cout<<"NO SOLUTION"<<'\n';
    
    return 0;
}
