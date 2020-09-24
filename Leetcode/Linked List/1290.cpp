//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/




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
    int getDecimalValue(ListNode* head) {
        ListNode* p=head,*q=head;
        int c=0,ans=0;
        while(p)
        {
            c+=1;
            p=p->next;
        }
        c-=1;
        while(q)
        {
            if(q->val==1)
            {
                ans+=pow(2,c);
            }
            c-=1;
            q=q->next;
        }
        return ans;
    }
};