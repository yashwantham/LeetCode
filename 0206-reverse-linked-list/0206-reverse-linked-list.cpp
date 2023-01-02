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


// Recursive approach  TC: O(n)
class Solution {
public:
    class Pair {
        public:
            ListNode *head;
            ListNode *tail;
    };
    
    Pair reverseList2(ListNode* head) {
        if(head == NULL || head -> next == NULL) {
            Pair ans;
            ans.head = head;
            ans.tail = head;
            return ans;
        }
        
        Pair smallAns = reverseList2(head -> next);
        smallAns.tail -> next = head;
        head -> next = NULL;
        smallAns.tail = head;
        
        return smallAns;
    }
    
    ListNode* reverseList(ListNode* head) {
        return reverseList2(head).head;
    }
};







// Recursive approach  TC: O(n²)
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head -> next == NULL) { return head; }
        
//         ListNode* smallAns = reverseList(head -> next);
//         ListNode *temp = smallAns;
//         while(temp -> next != NULL) {
//             temp = temp -> next;
//         }
//         temp -> next = head;
//         head -> next = NULL;
//         return smallAns;
//     }
// };