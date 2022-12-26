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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) { return l2; }
        if(l2 == NULL) { return l1; }
        ListNode *fh = NULL;
        ListNode *ft = NULL;
        while(l1 != NULL && l2 != NULL) {
            if(fh == NULL) {
                if(l1 -> val < l2 -> val) {
                    fh = l1;
                    ft = l1;
                    l1 = l1 -> next;
                }
                else {
                    fh = l2;
                    ft = l2;
                    l2 = l2 -> next;
                }
            }
            else {
                if(l1 -> val < l2 -> val) {
                    ft -> next = l1;
                    ft = l1;
                    l1 = l1 -> next;
                }
                else {
                    ft -> next = l2;
                    ft = l2;
                    l2 = l2 -> next;
                }
            }
        }
        
        while(l1 != NULL) {
            ft -> next = l1;
            ft = l1;
            l1 = l1 -> next;
        }
        while(l2 != NULL) {
            ft -> next = l2;
            ft = l2;
            l2 = l2 -> next;
        }
        return fh;
    }
};