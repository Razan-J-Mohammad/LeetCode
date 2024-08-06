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
class Solution {
public:
    void reorderList(ListNode* head) {
        if (!head || !head->next) return;

        vector<int> v;
        ListNode* curr = head;

        while (curr) {
            v.push_back(curr->val);
            curr = curr->next; 
        }

        int n = v.size();
        curr = head;

        for (int i = 0; i < n / 2; ++i) {
            curr->val = v[i];                
            curr = curr->next;
            curr->val = v[n - i - 1];       
            curr = curr->next;
        }
        
      
    }
};
