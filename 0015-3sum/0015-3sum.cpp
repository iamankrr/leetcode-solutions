class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();

        sort(nums.begin(),nums.end());

        for(int i = 0; i < n-2; i++){
            if(i> 0 && nums[i]== nums[i-1]){
                continue;
            }
            int st = i+1, end = n-1;

            while(st < end){
                int sum = nums[i] + nums[st] + nums[end];

                if(sum == 0){
                    res.push_back({nums[i],nums[st],nums[end]});
                    while (st < end && nums[st] == nums[st + 1]) st++;
                    while (st < end && nums[end] == nums[end - 1]) end--;
                    
                    st++;
                    end--;
                }else if(sum > 0){
                    end--;
                }else{
                    st++;
                }
            }
        }
        return res;
    }
};