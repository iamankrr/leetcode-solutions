class Solution {
public:

    bool searchInRow(vector<vector<int>>& matrix, int target,int row){
        int n = matrix[0].size();
        int st = 0, end = n-1;

        while(st <= end){
            int mid = st + (end-st)/2;
            if(target == matrix[row][mid]){
                return true;
            }else if(target < matrix[row][mid]){
                end = mid -1;
            }else{
                st = mid + 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //BS on total no of Rows
        int m = matrix.size();        // total no of rows
        int n = matrix[0].size();     // total no of columns

        int startRow = 0, endRow = m-1;
        int rows = -1; // if not found;

        while(startRow <= endRow){
            int midRow = startRow+(endRow - startRow) /2;

            if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
                //found the row => BS on this Row
               return searchInRow(matrix,target,midRow);

            }else if(target >= matrix[midRow][0]){
                //down => right
                startRow = midRow+1;
            }else{
                //up => left
                endRow = midRow-1;
            }
        }
        return false;
    }
};