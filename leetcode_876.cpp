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
    ListNode* middleNode(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        bool check=false;
        ListNode *ptr1=head;
        ListNode *ptr2=head;
        while(ptr2!=nullptr&&ptr2->next!=nullptr){
            ptr2=ptr2->next->next;
            ptr1=ptr1->next;
            // if(ptr2==nullptr){
            //     return ptr1->next;
            // }        
        }
            return ptr1;
    }

};