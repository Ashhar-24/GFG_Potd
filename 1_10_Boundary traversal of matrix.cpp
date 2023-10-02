
class Solution
{
public:
    //Function to return list of integers that form the boundary
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m)
    {
        // code here
        vector<int>ans;
        int startRow = 0, startCol = 0 , endRow = n - 1 , endCol = m - 1;
        for (int i = 0; i < m; i++)
        {
            ans.push_back(matrix[startRow][i]);
        }
        startRow++;

        for (int i = 1; i < n; i++)
        {
            ans.push_back(matrix[i][endCol]);
        }
        endCol--;

        if (endRow >= startRow) {
            for (int i = m - 2; i >= 0; i--)
            {
                ans.push_back(matrix[endRow][i]);
            }
            endRow--;
        }

        if (startCol <= endCol) {
            for (int i = n - 2; i >= 1 ; i--)
            {
                ans.push_back(matrix[i][startCol]);
            }
            startCol++;
        }

        return ans;
    }
};