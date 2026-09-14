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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode ans(0);
        ListNode *ptr = head;
        ListNode *temp = &ans;
        while(ptr)
        {
            if(ptr->val !=  val)
            {
                temp->next = ptr;
                temp = ptr;
            }
            ptr = ptr->next;
        }
        temp->next = nullptr;
        return ans.next;
    }
    };