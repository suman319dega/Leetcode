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
        ListNode *temp1 = l1, *temp2 = l2;
        ListNode* dup = new ListNode(-1);
        ListNode* num = dup;
        int carry = 0;
        while(temp1 || temp2) {
            int sum = carry;
            if(temp1) {
                sum += temp1 -> val;
                temp1 = temp1 -> next;
            }
            if(temp2) {
                sum += temp2 -> val;
                temp2 = temp2 -> next;
            }

            carry = sum / 10;
            num -> next = new ListNode(sum % 10);
            num = num -> next;
        }
        if(carry) {
            num -> next = new ListNode(carry);
        }
        return dup -> next;
    }
};