#include "common.h"

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) return s;

        int start = 0, maxLen = 0;

        for (int i = 0; i < n; ++i) {
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--; r++;
            }
            int len = r - l - 1;
            if (len > maxLen) {
                maxLen = len;
                start = l + 1;
            }

            l = i; r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                l--; r++;
            }
            len = r - l - 1;
            if (len > maxLen) {
                maxLen = len;
                start = l + 1;
            }
        }

        return s.substr(start, maxLen);
    }
};

int main() {
    Solution solution;
    string s = "babad";
    cout << solution.longestPalindrome(s) << endl;
    s = "cbbd";
    cout << solution.longestPalindrome(s) << endl;
}