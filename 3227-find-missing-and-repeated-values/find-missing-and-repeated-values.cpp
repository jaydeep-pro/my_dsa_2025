class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long  perfectSum = 0, perfectSqrSum = 0;
        long long sum = 0, sqrSum = 0;
        int n = grid.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                sum += grid[i][j];
                sqrSum += (grid[i][j] * grid[i][j]);
            }
        }

        int nSqr = n * n;
        perfectSum = (nSqr) * (nSqr + 1) / 2;
        perfectSqrSum = (perfectSum) * (2 * nSqr + 1) / 3;

        int diff = perfectSum - sum;
        int sqrDiff = perfectSqrSum - sqrSum;


        int xPlusY = sqrDiff/ diff;

int x = (xPlusY + diff)/2;
int y = (xPlusY - diff)/2;

return { y, x};


    }
};