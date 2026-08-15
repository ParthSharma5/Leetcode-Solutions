class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        bool allElementZero = true;
        for(auto &x : nums){
            result = (result ^ x);
            if(x != 0){
                allElementZero = false;
            }
        }
        if(allElementZero){
            return 0;
        }
        return (result == 0) ?  n-1 : n;
    }
};