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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head -> next == NULL || k == 0) { return head; }
        ListNode *calc = head;
        
        // Get the length of the list
        int len = 1;
        while(calc -> next != NULL) {
            calc = calc -> next;
            len++;
        }
        
        calc -> next = head;
        k = k % len; 
        int f = len - k;   // f = number of nodes that has to be moved to last
        // Traverse till the first f nodes 
        while(f > 0) {
            calc = calc -> next;
            f--;
        }
        
        head = calc -> next;
        calc -> next = NULL;
        return head;
        
    }
};