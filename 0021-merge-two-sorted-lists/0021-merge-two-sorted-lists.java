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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null && list2 == null) return null;
        if(list1 == null && list2 != null) return list2;
        if(list1 != null && list2 == null) return list1;

        ArrayList<Integer> list = new ArrayList<>();
        ListNode temp1 = list1;
        while(temp1 != null) {
            list.add(temp1.val);
            temp1 = temp1.next;
        }
        ListNode temp2 = list2;
        while(temp2 != null) {
            list.add(temp2.val);
            temp2 = temp2.next;
        }
        Collections.sort(list);
        ListNode ans = new ListNode();
        ListNode temp = ans;
        for(int i=0; i<list.size(); i++) {
            temp.next = new ListNode(list.get(i));
            temp = temp.next;
        }
        return ans.next;
    }
}