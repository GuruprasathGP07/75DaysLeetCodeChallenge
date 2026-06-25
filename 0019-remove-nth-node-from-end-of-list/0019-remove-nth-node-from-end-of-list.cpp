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
    int countnodes(ListNode* temp){
        int cc=0;
        while(temp){
            temp=temp->next;
            cc++;
        }
        return cc;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n){
        int tot=countnodes(head);
        int r=(tot-n);
        ListNode* temp=head;
        if(tot==n){
            return head->next;
        }
        for(int i=0;i<r-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};