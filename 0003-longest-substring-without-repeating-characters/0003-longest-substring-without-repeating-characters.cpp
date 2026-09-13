class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int hash[256] = {0};
        int maxlen=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            hash[s[i]]=-1;
        }
        
        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            int len = r - l + 1;
            maxlen = max(len, maxlen);
            hash[s[r]]=r;
            r++;
        }
        
        
            
                
           return maxlen; 
        }
        
    };
