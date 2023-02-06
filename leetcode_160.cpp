//find the intersection point of two linked list
#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(!headA or !headB){
        return nullptr;
    }
    ListNode *ptr1=headA;
    ListNode *ptr2=headB;
    while (ptr1!=ptr2)   
    {
        if(ptr1==nullptr){
            ptr1=headB;
        }
        else
        ptr1=ptr1->next;
        if(ptr2==nullptr){
            ptr2=headA;
        }
        else
        ptr2=ptr2->next;
    }
    return ptr1;

    
}