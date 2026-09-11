class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int n = nums.size();
        int st = 0, end = 0;

        while(end < n){
            if(nums[end] == 0){
                end++;
            }else{
                swap(nums[end],nums[st]);
                st++;
                end++;
            }
        }   
    }
};