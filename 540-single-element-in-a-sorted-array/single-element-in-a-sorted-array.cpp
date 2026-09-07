class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        //agar array ka size 1 ho.
        if( n == 1){
            return nums[0];
        }
        int st = 0 , end = n-1;

        while(st <= end){
            
            //find mid

            int mid = st + (end - st)/2;
            
            //check endge case is answer
            if(mid == 0 && nums[0] != nums[1]){
                return nums[0];
            }
            if(mid == n-1 && nums[n-1] != nums[n-2]){
                return nums[n-1];
            }
            
            //check mid is ans or not
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }

            //we check mid is even or odd.
            if(mid % 2 == 0){
 
                if(nums[mid-1] == nums[mid]){ //right move
                    end = mid -1;
                }else{                         //left move
                    st = mid +1;
                }
            }else{                            // if case is odd. 
                if(nums[mid] == nums[mid-1]){
                    st = mid + 1;
                }else{
                    end = mid -1;
                }
            }
        }
        return -1;

    }
};