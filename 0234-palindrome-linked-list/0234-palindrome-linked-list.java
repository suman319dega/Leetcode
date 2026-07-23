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
    public boolean isPalindrome(ListNode head) {
        if(head == null) return true;
        Stack<ListNode> stk = new Stack<>();
        ListNode temp = head;
        while(temp != null) {
            stk.push(temp);
            temp = temp.next;
        }
        temp = head;
        while(!stk.empty()) {
            if(stk.peek().val != temp.val) return false;
            stk.pop();
            temp = temp.next;
        }
        return true;
    }
}