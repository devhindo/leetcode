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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multimap<int,ListNode*>m;
        for(auto l : lists) if(l) m.insert({l->val, l});
        ListNode* all = new ListNode();
        ListNode* tmp = all;
        while(!m.empty()) {
            ListNode* n = new ListNode();
            if(!m.begin()->second) {
                m.erase(m.begin());
                continue;
            }
            auto itr = m.begin();
            n->val = itr->first;
            if(itr->second->next) {
                m.insert({itr->second->next->val,itr->second->next});
            } 
            m.erase(itr);
            tmp->next = n;
            tmp = n;
        }
        return all->next;
    }
};