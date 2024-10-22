// smallest-range-ii
// 转化为原数组的值要么不变，要么+2k, 这样不影响最终的输出
// 排序后，从中间找一点，将一段递增的数组，变成两段递增的数组
// 最大值，最小值只会出现在端点处
#include "ds_utils.h"

namespace LC910 {
class Solution {
public:
    int smallestRangeII(vector<int> &nums, int k) {
        std::sort(nums.begin(), nums.end());
        int ret = nums[nums.size() - 1] - nums[0];
        for (size_t i = 1; i < nums.size(); i++) {
            int minNum = min(nums[0] + 2 * k, nums[i]);
            int maxNum = max(nums[i - 1] + 2 * k, nums[nums.size() - 1]);
            ret = min(ret, maxNum - minNum);
        }
        return ret;
    }
};
} // namespace LC910

int main()
{
    LC910::Solution solution;
    vector<int> nums = {1, 3, 6};
    print(nums);
    print(solution.smallestRangeII(nums, 3));
    return 0;
}