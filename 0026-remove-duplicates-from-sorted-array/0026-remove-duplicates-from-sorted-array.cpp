class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();

        //solution with random example

        int officer = 0, cm = 1;
        int ans = 1;

        while(cm < n){
            if(nums[cm] == nums[cm-1]){
                cm++;
            }else{
                nums[officer+1] = nums[cm];
                officer++;
                cm++;
                ans++;                
            }
        } 
        return ans;
    }
};