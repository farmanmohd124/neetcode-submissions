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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* temp= new ListNode(-1);
        ListNode * head = temp;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
               head->next=list1;
               list1=list1->next;
               head=head->next;
            }
            else if(list2->val < list1->val){
                head->next=list2;
                list2=list2->next;
                head=head->next;
            }
        }
        if(list1==NULL){
            head->next=list2;
        }
        if(list2==NULL){
            head->next=list1;
        }

        return temp->next;
    }
};
