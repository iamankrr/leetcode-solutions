class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
        int n = nums.size();
        vector<int> Ssqr(n,1);

        for(int i=0; i< n; i++){
            Ssqr[i] = (nums[i] * nums[i]);        
        }
        sort(Ssqr.begin(),Ssqr.end());
        return Ssqr;
    }
};