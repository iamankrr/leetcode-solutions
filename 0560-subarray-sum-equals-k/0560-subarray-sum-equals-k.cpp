class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        m[0] = 1;

        int prefixSum = 0;
        int count = 0;

        for(int i = 0 ; i < nums.size(); i++){
            prefixSum += nums[i];
            if(m.find(prefixSum - k) != m.end()){
                count += m[prefixSum - k]; 
            }
            m[prefixSum]++;
        }
        return count;
    }
};