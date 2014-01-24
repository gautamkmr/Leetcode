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
    ListNode *merge(ListNode *a, ListNode *b)
    {
       if(a==NULL)
         return b;
       if(b==NULL)     
         return a;
        
        ListNode *res;
        if(a->val < b->val)
        {
            res = a;
            res->next = merge(a->next, b);
        }
        else
        {
            res = b;
            res->next =  merge(a, b->next);
        }
        return res;
    }
 /*   ListNode *mergeKLists(vector<ListNode *> &lists) {
         int k = lists.size();
         if(k==0)
          return NULL;
         if(k==1)
          return lists.pop_back();
         
         //we are sure we have two lists
         ListNode *a = lists.pop_back();
         ListNode *b = lists.pop_back();
         
         ListNode *res = merge(a,b);
         lists.push_back(res);
         
         return mergeKLists(lists);
    }
 */    
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        ListNode *head = NULL;
        for(int i = 0; i < lists.size(); ++i)
            head = merge(head, lists[i]);
        return head;
    }
 
};
