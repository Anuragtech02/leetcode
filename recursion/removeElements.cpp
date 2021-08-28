#include <iostream>

/**
 * Definition for singly-linked list.
*/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
    ListNode *head = NULL;

public:
    void removeFromHead()
    {
        this->head = this->head->next;
    }
    void removeTail()
    {
    }
    void removeElement(ListNode *node)
    {
    }
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *temp = head;
        this->head = head;
        while (temp->next != NULL)
        {
            if (temp->val == val)
            {
                removeElement(temp);
            }
            temp = temp->next;
        }
        return this->head;
    }
};