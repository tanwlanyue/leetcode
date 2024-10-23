// count-pairs-that-form-a-complete-day-ii
#include "ds_utils.h"
namespace LC3185 {
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long cnt = 0;
        long long table[24] = {}; 
        for (size_t i = 0; i < hours.size() ; i++) {
            int num = hours[i] % 24;
            cnt += (num == 0 ? table[0] : table[24 - num]);
            table[num]++;
        }
        return cnt;
    }
};
} // namespace LC3185

int main()
{
    LC3185::Solution solution;
    vector<int> hours = {72,48,24,3};
    print(hours);
    print(solution.countCompleteDayPairs(hours));
    return 0;
}