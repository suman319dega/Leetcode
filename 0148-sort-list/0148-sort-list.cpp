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

ListNode* array_ll(vector<int> &ans) {
    if(ans.size() == 0) return nullptr;
    ListNode* head = new ListNode(ans[0]);
    ListNode* temp = head;
    for(int i=1; i<ans.size(); i++) {
        ListNode* cur = new ListNode(ans[i]);
        temp -> next = cur;
        temp = temp -> next;
    }
    return head;
}



class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head -> next) return head;
        ListNode* temp = head;
        vector<int> ans;
        while(temp != nullptr) {
            ans.push_back(temp -> val);
            temp = temp -> next;
        }
        sort(ans.begin(),ans.end());
        ListNode* newhead = array_ll(ans);
        return newhead;
    }
};