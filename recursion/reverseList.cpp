#include <iostream>

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
    ListNode *reverseLinkedList(ListNode *node)
    {
        if (node == NULL)
        {
            return NULL;
        }
        if (node->next == NULL)
        {
            this->head = node;
            return node;
        }
        ListNode *newNode = reverseLinkedList(node->next);
        newNode->next = node;
        node->next = NULL;
        return head;
    }
    ListNode *reverseList(ListNode *head)
    {
        this->head = head;
        return reverseLinkedList(head);
    }
};