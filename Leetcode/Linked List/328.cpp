//https://leetcode.com/problems/odd-even-linked-list/


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
    ListNode* oddEvenList(ListNode* head) {
        if(!head||!head->next||!head->next->next)
            return head;
        ListNode* p=head,*q=head->next;
        ListNode*p1=p,*q1=q;
        while(q&&q->next)
        {
            p->next=q->next;
            p=p->next;
            q->next=p->next;
            q=q->next;
        }
        p->next=q1;
        return p1;
    }
};