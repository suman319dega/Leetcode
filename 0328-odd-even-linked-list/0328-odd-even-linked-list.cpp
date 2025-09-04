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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return nullptr;
        ListNode* odd = head -> next;
        ListNode* even = head;
        ListNode* odd_head = odd;
        while(odd && odd -> next) {
            even -> next = even -> next -> next;
            even = even -> next;
            odd -> next = odd -> next -> next;
            odd = odd -> next;
        }
        even -> next = odd_head;
        return head;
    }
};