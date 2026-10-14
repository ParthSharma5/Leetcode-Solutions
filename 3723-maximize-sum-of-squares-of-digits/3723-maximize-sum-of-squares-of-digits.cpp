class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > 9*num || sum  < 1){
            return "";
        }
        int nines = sum/9;
        int remainder = sum %9;
        string res(nines,'9');
        if(remainder > 0){
            res.push_back(remainder+'0');

        } 
        res.append(num - res.length(),'0');
        return res;
    }
};