#ifndef TANWLANYUE_COMMON_H
#define TANWLANYUE_COMMON_H

#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* CreateListNodeByVector(const vector<int>& nums)
{
    ListNode* head = new ListNode(); 
    ListNode* dummy = head;
    for (const auto& num : nums) {
        dummy->next = new ListNode(num);
        dummy = dummy->next;
    }
    return head->next;
}

void PrintListNode(ListNode* head) {
    while (head) {
        cout << head->val;
        head = head->next;
        if (head) cout << ",";
    }
    cout << endl;
}

#endif