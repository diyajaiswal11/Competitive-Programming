//https://leetcode.com/problems/remove-linked-list-elements/


#include <bits/stdc++.h> 
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  
  class Solution {
public:
    ListNode* removeElements(ListNode* head, int x) {
        ListNode* p=new ListNode(0);
        ListNode* ans=p;
        while(head)
        {
            if(head->val!=x)
            {
                ans->next=new ListNode(head->val);
                ans=ans->next;
            }
             head=head->next;   
        }
        return p->next;
    }
};
