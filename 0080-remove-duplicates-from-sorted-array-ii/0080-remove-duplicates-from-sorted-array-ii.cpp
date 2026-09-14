class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        //solution with random example;
        if(n <= 2){
            return n;
        }

        int cm = 2, officer = 2;
        int ans = 2;

        while(cm < n){
            if(nums[cm] == nums[officer-2]){
                cm++;
            }else{
                nums[officer] = nums[cm];
                officer++;
                cm++;
                ans++;
            }
        }
        return ans;
        
    }
};