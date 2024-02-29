class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows_size = matrix.size();
        int row = 0;
        int col = matrix[0].size()-1;

        while(row<rows_size && col>=0){
            int value = matrix[row][col];
            if(value == target){
                return true;
            }
            else if(value > target){
                col--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};