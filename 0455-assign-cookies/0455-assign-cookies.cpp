class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int c = 0;
        int h = 0;
        while(c < g.size() && h < s.size()){
            if(s[h] >= g[c] ){
                c++;
            }
            h++;
        }
        return c;
    }
};