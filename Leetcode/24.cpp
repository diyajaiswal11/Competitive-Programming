//https://leetcode.com/problems/swap-nodes-in-pairs/

#include <bits/stdc++.h> 
using namespace std;

 //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode*p=head;
        if(!head || !head->next)
            return head;
        while(head->next)
        {
            int temp=head->val;
            head->val=head->next->val;
            head->next->val=temp;
            if(head->next->next)
                head=head->next->next;
            else
                head=head->next;
        }
        return p;
    }
};