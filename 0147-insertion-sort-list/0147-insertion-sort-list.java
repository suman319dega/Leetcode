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
    public ListNode insertionSortList(ListNode head) {
        if(head == null) return head;
        ArrayList<Integer> list = new ArrayList<>();
        ListNode temp = head;
        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
        Collections.sort(list);
        ListNode dummy = new ListNode(0);
        ListNode cur = dummy;
        for(int val : list) {
            cur.next = new ListNode(val);
            cur = cur.next;
        }
        return dummy.next;
    }
}