/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <stack>

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) return nullptr; 

        std::stack<int> stack;
        ListNode* curr = head;

        while (curr != nullptr) {
            stack.push(curr->val);
            curr = curr->next;
        }

      
        ListNode* tp = new ListNode();
        ListNode* temp = tp;

        while (!stack.empty()) {
            temp->next = new ListNode(stack.top());
            stack.pop();
            temp = temp->next;
        }

        return tp->next;
    }
};
