class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0 , end = nums.size()-1;

        while(st < end){
            int mid = st + (end - st)/2; 

            if(nums[mid] < nums[end]){ //min is in the left half
                end = mid;    //because nums[mid] could itself be the minimum element;
        
            }else{            //min is at the right half;
                st = mid +1;
            }
        }
        return nums[st];
    }
};
