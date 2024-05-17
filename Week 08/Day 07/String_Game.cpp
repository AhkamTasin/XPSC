// Author: Ahkam_Tasin
// Created: 2024-05-17 14:21:59
//<a href= />
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans ;
        vector<char> a;
        for (char c : s)
        {
            a.push_back(c);
        }

        map<char,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        ans=min(mp['0'],mp['1']);
        if (ans % 2 != 0)
        {
            cout << "Zlatan" << '\n';
        }
        else if (ans % 2 == 0)
        {
            cout << "Ramos" << '\n';
        }
    }
    return 0;
}