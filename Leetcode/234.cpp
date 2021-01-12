//https://leetcode.com/problems/palindrome-linked-list/


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
    bool isPalindrome(ListNode* head) {
        
        if(!head || !head->next)
            return true;
        ListNode *rev=NULL,*p1=head;
        ListNode *slow=head,*fast=head;
        while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*p2=slow->next;
        
        while(p2)
        {
            ListNode* nextn=p2->next;
            p2->next=rev;
            rev=p2;
            p2=nextn;
        }
        while(rev&&p1)
        {
            if(p1->val!=rev->val)
                return false;
            p1=p1->next;
            rev=rev->next;
        }
        return true;
    }
};