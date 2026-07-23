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
    public ListNode reverseList(ListNode head) {
        if(head == null) return head;
        ArrayList<Integer> list = new ArrayList<>();
        ListNode temp = head;
        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
        Collections.reverse(list);
        ListNode ans = new ListNode();
        ListNode x = ans;
        for(int i=0; i<list.size(); i++) {
            x.next = new ListNode(list.get(i));
            x = x.next;
        }
        return ans.next;
    }
}