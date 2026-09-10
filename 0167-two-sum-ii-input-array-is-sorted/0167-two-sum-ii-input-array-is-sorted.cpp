class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        int st = 0, end = n-1;

        while(st < end){
            if(nums[st] + nums[end] == target){
                return {st+1,end+1};

            }else if(nums[st] + nums[end] > target){
                end --;
            }else{
                st++;
            }
        }
        return {};
    }
};