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
    public ListNode swapPairs(ListNode head) {
        if(head == null) return head;
        ListNode temp = head;
        ArrayList<Integer> list = new ArrayList<>();
        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
       for (int i = 0; i + 1 < list.size(); i += 2) {
            int first = list.get(i);
            list.set(i, list.get(i + 1));
            list.set(i + 1, first);
        }

        ListNode dummy = new ListNode(0);
        ListNode cur = dummy;
        for (int val : list) {
            cur.next = new ListNode(val);
            cur = cur.next;
        }

        return dummy.next;
    }
}