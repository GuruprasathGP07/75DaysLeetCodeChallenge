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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* d=new ListNode(0);
        ListNode* ans=d;
        ListNode* temp=head;
        while(temp){
            int c=temp->val;
            bool flag=false;
            while(temp->next && c==temp->next->val){
                temp=temp->next;
                flag=true;
            }
            if(flag==false){
            d->next=temp;
            d=d->next;
            }
            
            temp=temp->next;
        }
        d->next=NULL;
        return ans->next;
        
    }
};