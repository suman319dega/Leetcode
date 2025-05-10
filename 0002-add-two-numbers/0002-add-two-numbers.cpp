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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a = l1;
        ListNode* b = l2;
        ListNode* ans = new ListNode(-1);
        int carry = 0;
        ListNode* cur = ans;
        while(a || b ) {
            int sum = carry;
            if(a) {
                sum += a -> val;
                a = a -> next;
            }
            if(b) {
                sum += b -> val;
                b = b -> next;
            }
            carry = sum / 10;
            cur -> next = new ListNode(sum % 10);
            cur = cur -> next;
        }
        if(carry) {
            cur -> next = new ListNode(carry);
        }
        return ans -> next;

    }
};