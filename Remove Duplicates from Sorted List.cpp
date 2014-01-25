/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
     if(head==NULL ||head->next==NULL) return head;
     ListNode *curr = head;
     ListNode *tmp =head;
     while(head!=NULL)
     {
         tmp=head->next;
         while(tmp!=NULL && tmp->val==head->val)
         {
             tmp=tmp->next;
         }
         head->next=tmp;
         head=head->next;
     }
     return curr;
     }
};
