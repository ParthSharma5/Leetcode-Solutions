class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minEle = INT_MAX;
        vector<int>minIndex(n);
        for(int i=n-1;i>=0;i--){
            minEle = min(minEle,nums[i]);
            minIndex[i] = minEle;
        }
        int maxEle = INT_MIN;
        for(int i=0;i<n;i++){
            maxEle = max(maxEle , nums[i]);
            if(maxEle - minIndex[i] <= k)
            {   
                return i;
            }
        }
        return -1;
    }
};