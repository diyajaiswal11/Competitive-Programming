//https://leetcode.com/problems/partition-list/



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
    ListNode* partition(ListNode* head, int x) {
        ListNode* p=new ListNode(0),*p1=p;
        ListNode* q=new ListNode(0),*q1=q;
        while(head)
        {
            if(head->val<x)
            {
                p->next=new ListNode(head->val);
                p=p->next;
            }
            else
            {
                q->next=new ListNode(head->val);
                q=q->next;
            }
            head=head->next;
        }
        p->next=q1->next;
        return p1->next;
    }
};