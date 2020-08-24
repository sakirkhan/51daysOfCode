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
    ListNode* reverseList(ListNode* head) {
       
        return reverseListUsingRecursion(head,NULL);
    }
    
    ListNode* reverseListUsingRecursion(ListNode* head,ListNode* prev){
        if(head ==NULL){
            return prev;
        }
        ListNode* nxt = head->next;
        head->next = prev;
        
        return reverseListUsingRecursion(nxt,head);
    } 
};