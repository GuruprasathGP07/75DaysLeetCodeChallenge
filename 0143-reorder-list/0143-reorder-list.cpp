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
    void reorderList(ListNode* head) {
        vector<ListNode*>arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp);
            temp=temp->next;
        }
        int l=0,r=arr.size()-1;
        while(l<r){
            arr[l]->next=arr[r];
            l++;
            if(l==r) break;
            arr[r]->next=arr[l];
            r--;
        }
        arr[l]->next=NULL;
    }
};