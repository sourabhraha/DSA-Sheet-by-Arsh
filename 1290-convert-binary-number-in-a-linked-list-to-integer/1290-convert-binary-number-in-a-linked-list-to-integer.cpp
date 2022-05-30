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
    int getDecimalValue(ListNode* head) {
        
        ListNode *t = head->next;
        int dec = head->val;
        
        while(t!= NULL)
        {
          dec = (dec << 1) | t->val;
          t = t->next;
        }
        
        return dec;
    }
};