class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one_1 = 0;
        int two_2 = 0;
        for(auto num:nums){
            one_1 = (one_1 ^ num) & ~two_2;
            two_2 = (two_2 ^ num) & ~one_1;
        }
        return one_1;
    }
};