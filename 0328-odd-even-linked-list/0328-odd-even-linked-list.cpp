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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
       ListNode* odd=new ListNode(0);
       ListNode* ans=odd->next;
       ListNode* even=new ListNode(0);
       ListNode* eff=new ListNode(0);
       bool ef=true;
       int i=1;
       while(temp!=nullptr){
           if(i%2!=0){
               odd->next=temp;
               odd=odd->next;
           }
           else{
               even->next=temp;
               if(ef==true){
                   eff->next=temp;
                   ef=false;
               }
               even=even->next;
           }
           temp=temp->next;
           i++;
       }
       even->next=nullptr;
       odd->next=eff->next;
       return head;
    }
};