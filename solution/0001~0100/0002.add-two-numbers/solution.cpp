#include "common.h"

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* cur = &dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            l1 = l1 ? l1->next : nullptr;
            l2 = l2 ? l2->next : nullptr;
        }
        return dummy.next;
    }
};

int main() {
    ListNode* l1 = CreateListNodeByVector(vector{9,9,9,9,9,9,9});
    ListNode* l2 = CreateListNodeByVector(vector{9,9,9,9});
    Solution solution;
    ListNode* result = solution.addTwoNumbers(l1, l2);
    PrintListNode(result);
}