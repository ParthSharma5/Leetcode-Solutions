class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minEle = INT_MAX;
        vector<int>stable(n);
        for(int i=n-1;i>=0;i--){
            minEle = min(minEle,nums[i]);
            stable[i] = minEle;
        }
        int maxEle = INT_MIN;
        for(int i=0;i<n;i++){
            maxEle = max(maxEle,nums[i]);
            if(maxEle - stable[i] <= k){
                return i;
            }
        }
        return -1;
    }
};