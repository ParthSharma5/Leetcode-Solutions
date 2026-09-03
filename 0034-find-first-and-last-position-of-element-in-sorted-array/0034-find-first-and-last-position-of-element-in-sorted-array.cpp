class Solution {
private:
    int lowerbound(vector<int>& nums, int target) {
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        return lb;
    }
    int upperbound(vector<int>& nums, int target) {
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        return ub;
    }

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstOcc = lowerbound(nums, target);
        if (firstOcc == nums.size() || nums[firstOcc] != target) {
            return {-1, -1};
        }
        int lastOcc = upperbound(nums, target) - 1;
        return { firstOcc, lastOcc };
    }
};