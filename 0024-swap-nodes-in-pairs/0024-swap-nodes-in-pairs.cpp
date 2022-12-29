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
        ListNode* f = head;
        ListNode* s;
        if(!f) return head;
        while(f->next) {
            s = f->next;
            swap(f->val,s->val);
            if(f->next->next) {
                f = f->next->next;
            } else {
                break;
            }
        } 
        return head;
    }
};