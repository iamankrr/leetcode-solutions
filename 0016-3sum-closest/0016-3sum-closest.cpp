class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(),nums.end());
        int res_sum = 0;
        int min_diff = INT_MAX;
        
        for(int i = 0; i < n-2 ; i++){
            
            int st = i+1, end = n-1;
            while(st < end){
                int sum = nums[i] + nums[st] + nums[end];
                int diff = abs(target - sum); 

                if(min_diff > diff){
                    min_diff = diff;
                    res_sum = sum;
                }
                if(sum == target){
                    return res_sum;

                }else if(sum < target){
                    st++;
                }else{
                    end--;
                }
            }
        }
        return res_sum;       
    }
};