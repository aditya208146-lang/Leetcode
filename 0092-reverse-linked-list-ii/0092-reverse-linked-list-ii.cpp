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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     ListNode dummy(0,head);
        ListNode* start = &dummy;
        int count = 1;
        while(count < left)
        {
            start  = start->next;
            count++;
        }
        ListNode* curr = start->next; 
        ListNode* end = curr;
        ListNode* prev = nullptr;
        while(count <= right)
        {
            ListNode* nxt =  curr->next;
            curr->next = prev;
            prev=curr;
            curr=nxt;
            count++;
        }
        start->next=prev;
        end->next=curr;
        return dummy.next;
    }
};