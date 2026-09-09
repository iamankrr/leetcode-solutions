class Solution {
public:
    int findFirst(vector<int>& nums, int target) {
        int st = 0, end= nums.size()-1;
        int ans = -1;

        while(st <= end){
            int mid = st + (end - st)/2;
            
            if(nums[mid] == target ){
                ans = mid;
                end = mid -1;

            }else if(nums[mid] < target){
                st = mid +1;
            }else{
                end = mid -1;
            }
        }
        return ans;
    }

    int findLast(vector<int>& nums, int target) {
        int st = 0, end= nums.size()-1;
        int ans = -1;

        while(st <= end){
            int mid = st + (end - st)/2;
            
            if(nums[mid] == target ){
                ans = mid;
                st = mid +1;

            }else if(nums[mid] < target){
                st = mid +1;
            }else{
                end = mid -1;
            }
        }
        return ans;
    }

   vector<int> searchRange(vector<int>& nums, int target) {
        return {findFirst(nums,target),findLast(nums,target)};
    }  
};