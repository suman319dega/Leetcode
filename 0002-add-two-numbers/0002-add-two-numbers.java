/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1 == null && l2 != null) return l2;
        if(l1 != null && l2 == null) return l1;
        if(l1 == null && l2 == null) return null;
        ListNode temp1 = l1;
        ListNode temp2 = l2;
        ListNode ans = new ListNode();
        ListNode cur = ans;
        int carry = 0;
        while(temp1 != null || temp2 != null) {
            int sum = carry;
            if(temp1 != null) {
                sum += temp1.val;
                temp1 = temp1.next;
            }
            if(temp2 != null) {
                sum += temp2.val;
                temp2 = temp2.next;
            }
            cur.next = new ListNode(sum % 10);
            cur = cur.next;
            carry = sum / 10;

        } 
        if(carry != 0) {
            cur.next = new ListNode(carry);
            cur = cur.next;
        }
        return ans.next;

    }
}