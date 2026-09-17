class Solution {
public:
    int maxConsecBits(vector<int> &nums) {

        int count0 = 0;
        int count1 = 0;
        int maxSum = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0) {
                count0++;
                count1 = 0;
            }
            else {
                count1++;
                count0 = 0;
            }
            maxSum = max(maxSum,max(count0,count1));
        }

        return maxSum;
    }
};
