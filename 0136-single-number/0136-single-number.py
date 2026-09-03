class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        sic={}
        ans = 0
        for i in nums:
            sic[i] = sic.get(i,0) + 1
        for k,v in sic.items():
            if v == 1:
                ans = k
        return ans