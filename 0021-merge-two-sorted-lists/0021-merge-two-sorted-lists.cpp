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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && list2) return list2;
        if(list1 && !list2) return list1;
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        while(temp1 && temp2) {
            if(temp1 -> val < temp2 -> val) {
                ans -> next = temp1;
                temp1 = temp1 -> next;
            }
            else {
                ans -> next = temp2;
                temp2 = temp2 -> next;
            }
            ans = ans -> next;
        }
        if(temp1) ans -> next = temp1;
        if(temp2) ans -> next = temp2;
        return dummy -> next;
    }
};