class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector<int>frq1(26,0);
	    vector<int>frq2(26,0);
	    for(char c: pat)
	    {
	        frq1[c-'a']++;
	    }
	    int ans=0;
	    int r=0,l=0;
	    while(r<txt.size())
	    {
	        frq2[txt[r]-'a']++;
	        if(r-l+1==pat.size())
	        {
	            bool cnt=true;
	            for(int i=0;i<26;i++)
	            {
	                if(frq1[i]!=frq2[i])
	                {
	                    cnt=false;
	                }
	            }
	            if(cnt==true)
	            {
	                ans++;
	            }
	            frq2[txt[l]-'a']-=1;
	            l++;
	            r++;
	        }
	        else
	        {
	            r++;
	        }
	        
	    }
	    return ans;
	    
	}

};