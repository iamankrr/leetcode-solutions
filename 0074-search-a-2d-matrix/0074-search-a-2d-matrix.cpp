class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();        // number of rows
        int n = matrix[0].size();     // number of columns

        int top = 0, bottom = m-1;
        int rows = -1;

        while(top <= bottom){
            int mid = (top+bottom) /2;

            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                rows = mid;
                break;

            }else if(target < matrix[mid][0]){
                bottom = mid-1;
            }else{
                top = mid+1;
            }
        }
        if(rows == -1) return false;

        int st = 0, end = n-1;
        while(st <= end){
            int mid = (st+ end)/2;

            if(matrix[rows][mid] == target){
                return true;
            }else if(matrix[rows][mid] < target){
                st = mid+1; 
            }else{
                end = mid-1;
            }
        }
        return false;
    }
};