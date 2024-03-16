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
        cin>>n;
        vector<string>v1(n);
        vector<string>v2(n);
        vector<string>v3(n);
        vector<string> total;
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            total.push_back(v1[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>v2[i];
            total.push_back(v2[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>v3[i];
            total.push_back(v3[i]);
        }
        map<string,int>frq;
        for(string x:total)
        {
            frq[x]++;
        }
        int first=0;
        int second=0;
        int third=0;

        for(string f:v1)
        {
            if(frq[f]>=3) first+=0;
            else if(frq[f]==2) first+=1;
            else if(frq[f]==1) first+=3;
        }
        for(string f:v2)
        {
            if(frq[f]>=3) second+=0;
            else if(frq[f]==2) second+=1;
            else if(frq[f]==1) second+=3;
        }
        for(string f:v3)
        {
            if(frq[f]>=3) third+=0;
            else if(frq[f]==2) third+=1;
            else if(frq[f]==1) third+=3;
        }
        cout<<first<<" "<<second<<" "<<third<<'\n';
    }
    return 0;
}