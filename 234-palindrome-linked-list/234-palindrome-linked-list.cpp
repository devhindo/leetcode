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
    bool isPalindrome(ListNode* head) {
        string s = "";
        ListNode* q = head;
        while(q) {
            s.push_back(q->val);
            q = q->next;
        }
        int start=0,end = s.size()-1;
        while(start < end) {
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};