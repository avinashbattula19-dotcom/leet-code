/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
 {
    struct ListNode  Zero;
    struct ListNode *temp=&Zero;
    Zero.next=NULL;
    while(list1!=0 && list2!=0)
    {
        if(list1->val <= list2->val)
        {
            temp->next=list1;
            list1=list1->next;
        }else
        {
            temp->next=list2;
            list2=list2->next;
        }
        temp=temp->next;

    }
    if(list1!=NULL)
    temp->next=list1;
    else
    temp->next=list2;
    return Zero.next;
    
    
}