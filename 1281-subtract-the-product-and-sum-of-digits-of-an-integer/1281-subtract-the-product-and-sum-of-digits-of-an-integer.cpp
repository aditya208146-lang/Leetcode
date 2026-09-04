class Solution {
public:
    int subtractProductAndSum(int n) {
        int d=0;
        int sum=0;
        int pro=1;
        while(n!=0){
            d=n%10;
            pro=pro*d;
            sum=sum+d;
            n=n/10;
        }
        int diff=0;
        diff=pro-sum;
        return diff;
    }
};