class Solution
{
public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here
        int no_rows = matrix.size();
        int no_cols = matrix[0].size();

        vector<int>rows(no_rows);
        vector<int>cols(no_cols);

        //checking where 1 is present and storing that index
        for (int i = 0; i < no_rows; i++) {
            for (int j = 0; j < no_cols; j++) {
                if (matrix[i][j] == 1) {
                    rows[i] = 1;
                    cols[j] = 1;
                }
            }
        }

        // updating the matrix where 1 is present
        for (int i = 0; i < no_rows; i++) {
            for (int j = 0; j < no_cols; j++) {
                if (rows[i] == 1 or cols[j] == 1) {
                    matrix[i][j] = 1;
                }
            }
        }
    }
};