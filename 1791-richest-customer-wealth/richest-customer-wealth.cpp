class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for(vector<int> account : accounts){
            int sum = 0;
            for(int amt : account){
                sum += amt;
            }
            if(maxWealth < sum){
                maxWealth = sum;
            }
        }
        return maxWealth;
    }
};