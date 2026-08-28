class Solution {
public:
    int countMonobit(int n) {
        int count = 1;
        for(int i=1,x = 1; x<=n;i++){
            count++;
            x += (1 << i);
        }
        return count;
    }
};