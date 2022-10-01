class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<int> v;
        ListNode* q = head;
        while(q) {
            v.push_back(q->val);
            q = q->next;
        }
        v.erase(v.end()-n);
        ListNode *newhead = new ListNode();
        ListNode *itr = newhead;
        for(int i=0; i<v.size(); i++) {
            ListNode* t = new ListNode();
            t->val = v[i];
            itr->next = t;
            itr = t;
        }
        return newhead->next;
    }
};