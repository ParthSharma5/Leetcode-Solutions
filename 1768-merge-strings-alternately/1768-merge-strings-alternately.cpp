class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0;
        int j = 0;
        int n = word1.length();
        int m  = word2.length();

        while( i < n && j < m){
            ans += word1[i];
            ans += word2[j];
            i++;
            j++; 
        }
        // agr pehle word1 meh characters bach jaaye tb yeh karenge
        while(i < n){
            ans += word1[i];
            i++;
        }
        // agr word2 meh characters bach jaaye tb yeh hoga
        while(j < m){
            ans += word2[j];
            j++;
        }
        return ans;
    }
};