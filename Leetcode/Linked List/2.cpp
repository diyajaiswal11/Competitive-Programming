//https://leetcode.com/problems/add-two-numbers/



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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        ListNode* p = new ListNode(0); //here p points to first node which contains 0
        ListNode* ans=p;  //ans points to same as p
        int carry=0;
        while(a || b || carry)
        {
           int aval=a?a->val:0; 
            int bval=b?b->val:0; 
           ans->next=new ListNode((aval+bval+carry)%10);
            ans=ans->next; //ans moves forward but p still stays at first node
            carry=(aval+bval+carry)/10;
            if(a)
                a=a->next;
            if(b)
                b=b->next;
        }
        return p->next; //next because first node stores 0, and our answer starts from next node
    }
};