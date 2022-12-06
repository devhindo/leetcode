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
    /*
    - using three pointers technique.
    - slow pointer to make sure the first indices are well-ordered.
    - mid pointer used as a parameter for assigning values to the second half.
    - fast pointer for assigning values to the slow pointer.
    */
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *s = head;
        ListNode *m = head->next;
        ListNode *f = head;
        bool firstIsEven = s->val % 2 == 0;
        ListNode *newhead = new ListNode();
        ListNode* q = newhead;
        
        while(m && m->next) {
            ListNode* t = new ListNode();
            t->val = m->val;
            q->next = t;
            q = t;
            s->val = f->val;
            s = s->next;
            f = f->next->next;
            m = m->next->next;
        }
        if(m) {
            ListNode *t = new ListNode();
            t->val = m->val;
            q->next = t;
            q = t;
        }
        if(f) s->val = f->val;
        s->next=newhead->next;
        return head;
    }
};