/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* head=(struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* temp1=list1;
    struct ListNode* temp2=list2;
    head->val=-1;
    head->next=NULL;
    struct ListNode* temp=head;
    while(temp1 != NULL && temp2 != NULL){
        if(temp1->val < temp2->val){
            temp->next=temp1;
            temp1=temp1->next;
        }
        else{
            temp->next=temp2;
            temp2=temp2->next;
        }
        temp=temp->next;
    }
    if(temp1 != NULL){
        temp->next=temp1;
        temp1=temp1->next;
        temp=temp->next;
    }
    if(temp2 != NULL){
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;
    }
    return head->next;
}