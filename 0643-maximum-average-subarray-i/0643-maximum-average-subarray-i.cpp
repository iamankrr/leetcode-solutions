class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double currSum;
        double maxSum;

        // First window

        for(int i =0; i < k; i++){
            currSum += nums[i];
        }
        maxSum = currSum;

        int st = 0;
        int end = k-1;

        // Sliding window
        while(end < n){

            maxSum = max(currSum,maxSum);
            
            st++;
            end++;
            currSum = currSum - nums[st-1];

            if(end == n){
                break;
            }else{
                currSum += nums[end];
            }
        }
        return maxSum/k;
    }
};