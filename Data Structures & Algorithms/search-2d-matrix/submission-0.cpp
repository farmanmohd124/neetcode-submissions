class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        int lh =0;
        int rh = m*n -1;

        while(lh<=rh){

            int mid = lh + (rh-lh)/2;
            int row = mid/m;
            int col = mid%m;

            if(matrix[row][col]==target){
                return true;
            }
            else if(matrix[row][col]<target){
                lh = mid+1;
            }
            else{
                rh = mid-1;
            }

        }
        return false;

    }
};
