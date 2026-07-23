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
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null) return head;
        ListNode temp = head;
        ArrayList<Integer> list = new ArrayList<>();
        while(temp != null) {
            list.add(temp.val);
            temp = temp.next;
        }
        ListNode ans = new ListNode(list.get(0));
        ListNode cur = ans;
        for(int i=1; i<list.size(); i++) {
            if(list.get(i) != list.get(i-1)) {
                cur.next = new ListNode(list.get(i));
                cur = cur.next;
            }
        }
        return ans;
    }
}