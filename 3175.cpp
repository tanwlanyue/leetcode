// find-the-first-player-to-win-k-games-in-a-row
// TODO 需要重做
#include "ds_utils.h"
namespace LC3175 {
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        if(k==1) {
            return skills[0]>skills[1] ? 0 : 1;
        }
        int cnt = 0;
        size_t size = skills.size();
        map<int,int> map;
        int maxNum = 0;
        for(size_t i =0;i<skills.size();i++) {
            map[skills[i]] = i;
            if(skills[maxNum]<skills[i]) {
                maxNum = i;
            }
        }
        if(k>=size) {
            return maxNum;
        }

        int i = 0;
        while(true) {
            i = i%size;
            int j = (i+1)%size;
            if(skills[i]>skills[j]) {
                if (++cnt == k) {
                    return map[skills[i]];
                }
                swap(skills[i],skills[j]);
            } else {
                cnt = 1;
            }
            i++;
        }
    }

    void swap(int &a,int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
};
} // namespace LC3175

int main()
{
    LC3175::Solution solution;
    vector<int> nums = {4,2,6,3,9};
    print(nums);
    print(solution.findWinningPlayer(nums, 2));
    return 0;
}