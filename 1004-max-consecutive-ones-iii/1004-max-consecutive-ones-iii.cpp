class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int countZero = 0;
        int end = 0;
        int maxAns = 0;

        for(int st = 0; st < n; st++){
            if(nums[st] == 0){
                countZero++;
            }
        
            while(countZero > k){
                if(nums[end] == 0){
                  countZero--;
                }
                end++;
            }
            maxAns = max(maxAns, st- end +1);
        } 
        return maxAns;
    }
};