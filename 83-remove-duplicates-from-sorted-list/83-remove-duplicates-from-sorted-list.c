/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *q,*r,*s;
    if(!head) {
        return head;
    }
    q=head;
    r=q->next;
    while(r) {
        if(r->next) {
            if(q->val == r->val) {
                s=r;
                q->next=r->next;
                r=q->next;
                free(s);
            } else {
                q=r;
                r=r->next;
            }
        } else {
            if(q->val == r->val) {
                s=r;
                r=NULL;
                free(s);
                q->next = NULL;
            } else {
                r=r->next;
            }
        }
    }
    return head;
}