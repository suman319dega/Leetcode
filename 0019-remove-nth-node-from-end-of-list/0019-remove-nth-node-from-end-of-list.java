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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null) return null;
        List<Integer> list = new ArrayList<>();
        ListNode temp = head;
        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
        ListNode ans = new ListNode();
        ListNode cur = ans;
        int x = list.size();
        int id = (x - n);
        for(int i=0; i<x; i++) {
            if(i != id) {
                cur.next = new ListNode(list.get(i));
                cur = cur.next;
            }
        }
        return ans.next;
    }
}