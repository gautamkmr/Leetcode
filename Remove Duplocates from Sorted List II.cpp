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
        if(head == NULL || head->next==NULL)
          return head;
        ListNode *h = NULL;
        ListNode *t = NULL;
        ListNode *curr = head;
        bool flag = false;
        while(curr!=NULL && curr->next!=NULL)
        {
          flag  = false;
    
          while(curr->val==curr->next->val)
          {
                  flag = true;
                  curr = curr->next;
                  if(curr->next == NULL)
                   break;
          }
          if(flag==true)
          {
             curr = curr->next;
          }
          else
          {
             if(!h) 
              h = t = curr;
             else
             {
                t->next = curr;
                t = curr;
             }
             curr = curr->next;
          }
        }
        if(curr)
        {
            if(h) {
             t->next = curr;
             t = curr; }
            else
             h = t = curr;
        }
        if(t)
          t->next  = NULL;
        return h;
     }
};
