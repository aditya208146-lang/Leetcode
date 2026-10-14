class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if (sum < 0 || sum > 9 * num) {
            return "";
        }
        
        string result = "";
        
        for (int i = 0; i < num; ++i) {
            int d = std::min(9, sum);
            result += to_string(d);
            sum -= d;
        }
        
        return result;
    }
};