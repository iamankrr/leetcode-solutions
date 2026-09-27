class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k <= 1){
            return 0;
        }
        
        int n = nums.size();
        int st = 0;
        int count = 0;
        int product = 1;

        for(int end = 0 ; end < n ; end++){
            product *= nums[end];

            while(product >= k){
                product /= nums[st];
                st++;
            }
            count += end-st+1;
        }
        return count;
        
    }
};