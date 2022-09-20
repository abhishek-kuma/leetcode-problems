#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
    ListNode* save(ListNode *head){
        ListNode* temp=head;
        return head;
    }
    ListNode* deleteDuplicates(ListNode* head) {
        save(head);
        if (head!=NULL)
        {
            return save(head);
        }
        
        ListNode *temp1;
        ListNode *temp2;
        temp1=head;
        temp2=head;
        while (temp1->val==temp2->val)
        {
            temp2=temp2->next;
        }
        temp1->next=temp2;
        deleteDuplicates(temp1); 
    }
};
int main()
{
    return 0;
}