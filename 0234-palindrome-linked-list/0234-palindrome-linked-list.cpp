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
ListNode* rev(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = nullptr;
    while(temp) {
        ListNode* back = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = back;
    }
    return prev;
}

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast -> next) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        ListNode* rhead = rev(slow);
        ListNode* temp = head;
        ListNode* rtemp = rhead;
        while(rtemp) {
            if(rtemp -> val != temp -> val) {
                rev(rhead);
                return false;
            }
            rtemp = rtemp -> next;
            temp = temp -> next;
        }
        rev(rhead);
        return true;
     }
};