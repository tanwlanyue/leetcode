#include "common.h"

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> last(128, -1);
        int len = s.length();
        int j = 0;
        int i = -1;
        int maxLen = 0;
        while (j < len) {
            char c = s.at(j);
            if (last[c] != -1) {
                i = max(i, last[c]);
            }
            maxLen = max(maxLen, j - i);
            last[c] = j;
            j++;
        }

        return maxLen;
    }
};

int main() {
    Solution solution;
    string s = "abcabcbb";
    cout << solution.lengthOfLongestSubstring(s) << endl;
    s = "bbbbb";
    cout << solution.lengthOfLongestSubstring(s) << endl;
    s = "pwwkew";
    cout << solution.lengthOfLongestSubstring(s) << endl;
}