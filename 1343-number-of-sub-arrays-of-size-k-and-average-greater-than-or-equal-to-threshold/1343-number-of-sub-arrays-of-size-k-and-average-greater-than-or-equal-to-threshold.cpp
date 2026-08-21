class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int winSum = 0;
        int count = 0;
        // checking for first window
        for(int i=0;i<k;i++){
            winSum += arr[i];
        }
        // check the conditions 
        if(winSum >= threshold*k){
            count++;
        }
        // slide window
        for(int i=k;i<n;i++)
        {
            winSum += arr[i];
            // removing old elements;
            winSum -= arr[i-k];
            if(winSum >= threshold*k)
            {
                count++;
            }
        }
        return count;
    }
};