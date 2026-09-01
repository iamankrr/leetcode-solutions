class Solution {
public:
    int maxArea(vector<int>& height) {
        //two pointer approach

        int start =  0, end = height.size()-1;
        int maxWater = 0; 

        while(start < end){

            int width = end - start;
            int ht = min(height[start],height[end]);

            int currentWater = width * ht;

            maxWater = max(maxWater,currentWater);

            height[start] < height[end] ? start++ : end--;

            // if(start < end){
            //     start++;
            // }else{
            //     end--;
            // }
        }
        return maxWater;
    }
};