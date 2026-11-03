class Solution {
public:
    void getAllsubSet(vector<int>& nums, vector<int>&ans, int i,vector<vector<int>> &allsubSets){
        if(i == nums.size()){
            allsubSets.push_back(ans);
            return;
        }
        //include 
        ans.push_back(nums[i]);
        getAllsubSet(nums,ans,i+1,allsubSets);

        ans.pop_back();

        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }
        //exclude 
        getAllsubSet(nums,ans,idx,allsubSets);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> allsubSets;
        vector<int> ans;

        getAllsubSet(nums,ans,0,allsubSets);
        return allsubSets;
    }
};