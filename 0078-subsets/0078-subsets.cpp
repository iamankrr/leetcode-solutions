class Solution {
public:

    void getAllsubSets(vector<int>& nums, vector<int>& ans,int i, vector<vector<int>>& allsubSets) {

        if(i == nums.size()) {
            allsubSets.push_back(ans);
            return;
        }

        // Include
        ans.push_back(nums[i]);
        getAllsubSets(nums, ans, i+1, allsubSets);

        // Backtracking
        ans.pop_back();

        // Exclude
        getAllsubSets(nums, ans, i+1, allsubSets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> allsubSets;
        vector<int> ans;

        getAllsubSets(nums, ans, 0, allsubSets);

        return allsubSets;
    }
};