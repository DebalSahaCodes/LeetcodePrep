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
    ListNode* swapPairs(ListNode* head) {
        ListNode* res = new ListNode(0, head);
        ListNode* pre = res;
        ListNode* cur = head;
        while(cur && cur->next){
            ListNode* tmp = cur->next;
            cur->next = tmp->next;
            tmp->next = cur;
            pre->next = tmp;
            pre = cur;
            cur = cur-> next;
        }
        return res->next;
    }
};
