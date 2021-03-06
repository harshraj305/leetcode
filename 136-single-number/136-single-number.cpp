class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int xorSum = 0;
        
        for(int i=0; i<nums.size(); i++){
            xorSum = xorSum ^ nums[i];
        }
        return xorSum;
    }
};