class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int l=strs.size();
        string fxd=strs[0];
        for(int i=1; i<l; i++)
        {
            
            while(i<l && strs[i].find(fxd)!=0)
            {
                fxd.pop_back();
                if(fxd.empty())
                {
                    return "";
                }
                
            }
        }
        return fxd;
    }
};