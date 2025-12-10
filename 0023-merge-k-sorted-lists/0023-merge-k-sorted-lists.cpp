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

ListNode* array_LL(vector<int>& array) {
    if(array.empty()) return nullptr;

    ListNode* head = new ListNode(array[0]);
    ListNode* cur = head;

    for(int i = 1; i < array.size(); i++) {
        cur->next = new ListNode(array[i]);
        cur = cur->next;
    }
    return head;
}

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> array;
        for(auto temp : lists) {
            while(temp) {
                array.push_back(temp -> val);
                temp = temp -> next;
            }
        }
        sort(array.begin(),array.end());
        ListNode* ans = array_LL(array);
        return ans;
    }
};