class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int l=digits.size();
        int inHand = 0;
        if(digits[l-1]<9){
        digits[l-1] = digits[l-1] + 1;
        }
        else
        {
            inHand = 1;
            for(int i=l-1; i>=0; i--)
            {
                if(digits[i]+inHand>9)
                {
                    digits[i]=0;
                    inHand = 1;
                }
                else 
                {
                    digits[i] = digits[i]+1;
                    inHand = 0;
                    break;
                }
            }
        }
        if(inHand)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};