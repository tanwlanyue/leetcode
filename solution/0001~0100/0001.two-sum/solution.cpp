#include "common.h"

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        map.reserve(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            auto it = map.find(target - num);
            if (it != map.end()) {
                return {it->second, i};
            }  
            map[num] = i;
        }
        return {}; 
    } 
};

int main() {
    Solution solution;
    vector<int> nums{2,7,11,15};
    vector<int> res = solution.twoSum(nums,9);
    if (res.size() == 2) {
        cout << res[0] << "," << res[1] << endl;
    }
}