class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int minEle = INT_MAX;
        vector<int>minIndex(n); // [_,_,_,_,_];
        // so we can start it to the right side n -1;
        for(int i=n-1;i>=0;i--){
            minEle = min(minEle,nums[i]);
            minIndex[i] = minEle;
        }
        // for the maximum element;
        int maxEle = INT_MIN;
        // in this loop we can start the loop from left side of the array nums;
        for(int i=0;i<n;i++){
            maxEle = max(maxEle,nums[i]);
            if(maxEle - minIndex[i] <= k){
                return i;
            }
        }
        return -1;

    }
};