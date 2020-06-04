class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;
        
        for(int i = 0; i < nums.size(); i = i + 2)
            result = result + nums[i];
            
        return result;
    }
};
