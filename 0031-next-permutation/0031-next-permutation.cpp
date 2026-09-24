class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int n = nums.size();

        //find the pivot element
        int piv = -1;
        for(int i = n-2; i >= 0;i--){
            if(nums[i] < nums[i+1]){
                piv = i;
                break;
            }
        }
        if(piv == -1){
            reverse(nums.begin(),nums.end());
            return;
        }

        // 2nd step : to find next larger element

        for(int i = n-1; i > piv; i--){
            if(nums[i] > nums[piv]){
                swap(nums[i],nums[piv]);
                break;
            }
        }

        //3rd step : to reverse (pivot +1 to n-1);

        int st = piv +1;
        int end = n-1;
        
        while(st <= end){
            swap(nums[st],nums[end]);
            st++;
            end--;
        }

    }
};