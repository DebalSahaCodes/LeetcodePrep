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
    ListNode* reverseList(ListNode* head) {
        ListNode* res = new ListNode;
        ListNode* cur = head;
        while(cur != nullptr){
            ListNode* nxt = cur->next;
            cur->next = res->next;
            res->next = cur;
            cur = nxt;
        }
        return res->next;
    }
};
