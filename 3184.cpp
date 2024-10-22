// count-pairs-that-form-a-complete-day-i
// 一次遍历，两数求和
#include "ds_utils.h"

namespace LC3184 {
class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int cnt = 0;
        int table[24] = {}; 
        for (size_t i = 0; i < hours.size() ; i++) {
            int num = hours[i] % 24;
            cnt += (num == 0 ? table[0] : table[24 - num]);
            table[num]++;
        }
        return cnt;
    }
};
} // namespace LC3184

int main()
{
    LC3184::Solution solution;
    vector<int> nums = {12, 12, 30, 24, 24};
    print(nums);
    print(solution.countCompleteDayPairs(nums));
    return 0;
}