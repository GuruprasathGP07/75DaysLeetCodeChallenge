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
        ListNode* curr=head;
        if(head==NULL || head->next==NULL ){
            return head;
        }
        ListNode* pre=NULL;
        while(curr!=NULL){
            bool right=(pre==NULL || curr->val!=pre->val);
            bool left=(curr->next==NULL || curr->val!=curr->next->val);
            if(right && left){
                d->next=curr;
                d=d->next;
                pre=pre=curr;
                curr=curr->next;
            }
            else{
                pre=curr;
                curr=curr->next;
            }

        }
        d->next=NULL;
        return ans->next;


    }
};