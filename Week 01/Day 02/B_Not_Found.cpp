#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int frq[26]={0};
    for(char x:s)
    {
        frq[x-'a']++;
    }
    char ans;
    bool f=false;
    for(char i='a';i<='z';i++)
    {
        if(frq[i-'a']==0)
        {
            f=true;
            ans=i;
            break;
        }
    }
    if(f==true) cout<<ans<<'\n';
    else cout<<"None"<<'\n';
    return 0;
}