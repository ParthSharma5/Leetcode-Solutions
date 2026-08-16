class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int i =0;
        if(n == 0){
            return 0;

        }
        while(i < n){
            if(nums[left] != nums[i]){
                left++;
                nums[left] = nums[i];
                
            }
            i++;
        }
        return left + 1;
    }
};