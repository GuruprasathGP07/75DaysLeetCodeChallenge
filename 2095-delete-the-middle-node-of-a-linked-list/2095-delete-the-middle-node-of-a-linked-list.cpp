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
    int findnum(ListNode* t){
        int n=0;
        while(t){
            n++;
            t=t->next;
        }
        return n;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int n=findnum(head);
        int r=0;
        if(n%2==0)  r=(n/2);
        else r=(n/2);
        ListNode* temp=head;
        int t=1;
        while(temp){
            if(n==1) return nullptr;
            else if((t==r) && r==n){
                temp->next=nullptr;
            }
            else if(t==r){
                temp->next=temp->next->next;
            }
            t++;
            temp=temp->next;
        }
        return head;
    }
};