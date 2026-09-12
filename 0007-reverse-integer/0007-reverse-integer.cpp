class Solution {
public:
    int reverse(int x) {
        int d = 0;
        long rev = 0;
        while(x != 0){
            d = x%10;
            rev = (rev*10) + d;
            x = x/10;
        }

        if(rev < INT_MIN || rev > INT_MAX){
            return 0;
        }
        return rev;
    }
};