//https://leetcode.com/problems/reverse-linked-list/


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
    ListNode* reverseList(ListNode* head) {
        ListNode* c=head,*p=NULL,*n=NULL;
        while(c!=NULL)
        {
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        return p;
    }
};