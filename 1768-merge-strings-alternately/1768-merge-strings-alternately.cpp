class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;
        int j = 0;
        int n = word1.length();
        int m = word2.length();
        while(i < n && j < m){
            ans = ans + word1[i];
            ans = ans + word2[j];
            i++;
            j++;
        }
        // agr word1 meh bache ho
        while(i < n){
            ans = ans + word1[i];
            i++;
        }
        // agr word2 meh bache ho
        while(j < m){
            ans  = ans + word2[j];
            j++;
        }
        return ans;
    }
};