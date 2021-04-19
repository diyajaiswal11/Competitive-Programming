/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int k) {
        
        ListNode* p=head;
        ListNode* q=head;
        int n=0;
        while(p)
        {
            n+=1;
            p=p->next;
        }
        //cout<<n<<" ";
        int m=n-k;
        //cout<<m<<" ";
        if(m==0)
            head=head->next;
        else
        {
            int c=1;
            while(q)
            {
                if(m==c)
                    break;
                c+=1;
                q=q->next;
            }
            //cout<<q->val<<" ";
            //cout<<c;
            q->next=q->next->next;
        }
        return head;   
        
    }
};