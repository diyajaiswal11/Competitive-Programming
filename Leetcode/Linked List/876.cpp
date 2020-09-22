//https://leetcode.com/problems/middle-of-the-linked-list/


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
    ListNode* middleNode(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;
        while(p->next&&p->next->next)
        {
                p=p->next->next;
                q=q->next;
        }
        if(p->next)
            q=q->next;
        return q;
    }
};