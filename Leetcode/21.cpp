//https://leetcode.com/problems/merge-two-sorted-lists/




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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* p=new ListNode(0);
        ListNode* ans=p;
        while(a||b)
        {
            if(a&&b)
            {
                if(a->val<=b->val)
                {
                    ans->next=new ListNode(a->val);
                    ans=ans->next;
                    a=a->next;
                }
                else
                {
                    ans->next=new ListNode(b->val);
                    ans=ans->next;
                    b=b->next;
                }
            }
            else if(a)
            {
                ans->next=new ListNode(a->val);
                ans=ans->next;
                a=a->next;
            }
            else if(b)
            {
                ans->next=new ListNode(b->val);
                ans=ans->next;
                b=b->next;
            }
        }
                
        return p->next;
    }
};