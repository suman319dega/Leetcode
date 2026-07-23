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
    public void reorderList(ListNode head) {
        if (head == null || head.next == null) return;
        ArrayList<ListNode> list = new ArrayList<>();
        ListNode temp = head;
        while(temp != null) {
            list.add(temp);
            temp = temp.next;
        }
        ListNode cur = list.get(0);
        int n = list.size();
        int count = 1;
        int low = 1, high = n-1;
        while(low <= high) {
            if(count % 2 == 0) {
                cur.next = list.get(low);
                low++;
            }
            else {
                cur.next = list.get(high);
                high--;
            }
            cur = cur.next;
            count++;
        }
        cur.next = null;
    }
}