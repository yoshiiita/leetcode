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
    ListNode* rotateRight(ListNode* head, int k) {

    if(!head || !head->next||k==0) return head;
    ListNode* curr=head;
    int n=1;
    while(curr->next){
        n++;
        curr=curr->next;
    }

    k=k%n;
    if(k==0) return head;
    curr->next=head;

    int newPosition=n-k;

    curr=head;
    for(int i=1;i<newPosition;i++){
        curr=curr->next;
    }
    head=curr->next;
    curr->next=NULL;
    return head;

        
    }
};