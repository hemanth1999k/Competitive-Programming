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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *a = NULL; 
       int rem = 0;
       ListNode *start;
       while(l1!= NULL || l2!=NULL){
           if(l1!=NULL && l2!=NULL){
               int y = l1->val + l2->val+ rem;  
               rem = y/10;
               y = y%10;
               if(a==NULL){a = new ListNode(y);start = a;}
               else{a->next = new ListNode(y);a=a->next;}
            }else{
                if(l1==NULL){
                   int y = l2->val+ rem;  
                   rem = y/10;
                   y = y%10;
                   if(a==NULL){a = new ListNode(y);start = a;}
                   else{a->next = new ListNode(y);a=a->next;}
           
                }
                else{ 
                   int y = l2->val+ rem;  
                   rem = y/10;
                   y = y%10;
                   if(a==NULL){a = new ListNode(y);start = a;}
                   else{a->next = new ListNode(y);a=a->next;}
           
                }
 
            }
            if(l1!=NULL)l1 = l1->next;
            if(l2!=NULL)l2 = l2->next;
 
        }
     if(rem!=0){
            a->next = new ListNode(rem);
        }
        return start;
    }
};
