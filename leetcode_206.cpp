#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode* reverseList(ListNode* head) {
    if(head==nullptr or head->next == nullptr){
        return head;
    }
        stack<int> s;
        ListNode * curr=head;
        while (curr!=nullptr)
        {
            s.push(curr->val);
            curr=curr->next;
            /* code */
        }
        ListNode *solution=head;
        while (!s.empty())
        {
            head->val=s.top();
            s.pop();
            head=head->next;
        }
        return solution;
        
    }
int main()
{
    return 0;
}