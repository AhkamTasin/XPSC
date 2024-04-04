//Author: Ahkam_Tasin
//Created: 2024-04-04 04:52:40
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
        string a,b;
        cin>>a>>b;
        map<char,int>a1,b1;
        for(char c:a)
        {
            a1[c]++;
        }
        for(char d:b)
        {
            b1[d]++;
        }
        if(a1['M']==1 && b1['M']==1)
        {
            cout<<"="<<'\n';
        }
        else if(a1['S']==1 && b1['S']==1)
        {
            if(a1['X']>b1['X']) cout<<"<"<<'\n';
            else if(a1['X']==b1['X']) cout<<"="<<'\n';
            else cout<<">"<<'\n';
        }
        else if(a1['L']==1 && b1['L']==1)
        {
            if(a1['X']>b1['X']) cout<<">"<<'\n';
            else if(a1['X']==b1['X']) cout<<"="<<'\n';
            else cout<<"<"<<'\n';
        }
        else if(a1['S']==1 && b1['M']==1)
        {
            cout<<"<"<<'\n';
        }
        else if(a1['M']==1 && b1['S']==1)
        {
            cout<<">"<<'\n';
        }
        else if(a1['S']==1 && b1['L']==1) 
        {
            cout<<"<"<<'\n';
        }
        else if(a1['L']==1 && b1['S']==1) 
        {
            cout<<">"<<'\n';
        }
        else if(a1['M']==1 && b1['L']==1) 
        {
            cout<<"<"<<'\n';
        }
        else if(a1['L']==1 && b1['M']==1) 
        {
            cout<<">"<<'\n';
        }
        
    }
    return 0;
}