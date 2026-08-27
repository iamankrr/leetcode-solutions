class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        // //1st approach

        // int n = nums.size();
        // int newLen = 2 * n;

        // vector<int>ans(newLen);
        
        // for(int i = 0 ; i < n ; i++)
        // {
        //     ans[i] = nums[i];
        // }

        // for(int i = 0 ; i < n ; i++)
        // {
        //     ans[i+n] = nums[i];
        // }
        // return ans;

        // 2nd approach : easy 

        int n = nums.size();

        for(int i = 0 ; i < n ; i++){

            nums.push_back(nums[i]);

        }
        return nums;

    }
};