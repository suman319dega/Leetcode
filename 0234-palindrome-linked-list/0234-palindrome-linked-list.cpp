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
        if(!head) return true;
        ListNode* temp = head;
        stack<int> stk;
        while(temp) {
            stk.push(temp -> val);
            temp = temp -> next;
        }
        ListNode* rev_temp = head;
        while(rev_temp) {
            if(rev_temp -> val != stk.top()) return false;
            stk.pop();
            rev_temp = rev_temp -> next;
        }
        return true;
    }
};