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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        n=size-n+1;
        temp=head;
        if(n==1){
            head=temp->next;
            delete temp;
            return head;
        }
        ListNode* prev=NULL;
        for(int i=1; i<n; i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;
        return head;
    }
};