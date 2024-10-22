// search-a-2d-matrix-ii
#include "ds_utils.h"
namespace LC240 {
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        int i = row - 1;
        int j = 0;
        while (i >= 0 && j <= col - 1) {
            if (matrix[i][j] == target) {
                return true;
            } else if (matrix[i][j] > target) {
                i--;
            } else {
                j++;
            }
        }
        return false;
    }
};
} // namespace LC240

int main()
{
    LC240::Solution solution;
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    print(matrix);
    print(solution.searchMatrix(matrix, 5));
    return 0;
}