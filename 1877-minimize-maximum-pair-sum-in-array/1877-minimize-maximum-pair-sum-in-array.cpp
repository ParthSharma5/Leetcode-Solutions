class Solution {
public:
    int minPairSum(vector<int>& nums) {
        // IF YOU WANT ANYTHING YOU CAN READ FROM NOTES SECTION
        // step 1 sort the number
        // why we soorting this because i want larger number is avalaible on the last index and smaller is avalaible on the first index

        sort(nums.begin(),nums.end());
        int n = nums.size(); 
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while(i < j){
            int sum = nums[i] + nums[j];
            ans = max(sum,ans);  
            i++;
            j--;
        }
        return ans;
    }
};