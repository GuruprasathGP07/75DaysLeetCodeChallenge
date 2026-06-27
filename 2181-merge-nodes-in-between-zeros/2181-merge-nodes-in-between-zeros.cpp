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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* d=new ListNode(0);
        ListNode* ans=d;
        int s=0;
        ListNode* temp=head->next;
        while(temp){
            if(temp->val==0 ){
                d->next=new ListNode(s);
                d=d->next;
                temp=temp->next;
                s=0;
            }
            else{
                s+=temp->val;
                temp=temp->next;
            }

        }
        return ans->next;
        
    }
};