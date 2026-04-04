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
    ListNode* swapPairs(ListNode* head) {
        vector<int>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i+1<arr.size();i+=2){
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }
        ListNode* d=new ListNode;
        ListNode* ans=d;
        for(int i=0;i<arr.size();i++){
            ListNode* r=new ListNode(arr[i]);
            ans->next=r;
            ans=ans->next;
        }
        return d->next;
        
        
    }
};