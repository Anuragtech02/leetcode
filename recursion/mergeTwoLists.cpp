#include <iostream>
using namespace std;

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
    ListNode *mergedLists = new ListNode();

public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {

        if (l1 == NULL)
        {
            return l2;
        }
        if (l2 == NULL)
        {
            return l1;
        }

        if (l1->val <= l2->val)
        {
            mergedLists->val = l1->val;
            l1 = l1->next;
        }
        else
        {
            mergedLists->val = l2->val;
            l2 = l2->next;
        }

        merge(mergedLists, l1, l2);
        return mergedLists;
    }

private:
    void merge(ListNode *mergedLists, ListNode *l1, ListNode *l2)
    {
        if (l1 == NULL && l2 == NULL)
        {
            return;
        }

        if (l1 == NULL)
        {
            mergedLists->next = new ListNode(l2->val);
            l2 = l2->next;
        }
        else if (l2 == NULL)
        {
            mergedLists->next = new ListNode(l1->val);
            l1 = l1->next;
        }
        else if (l1->val <= l2->val)
        {
            mergedLists->next = new ListNode(l1->val);
            l1 = l1->next;
        }
        else
        {
            mergedLists->next = new ListNode(l2->val);
            l2 = l2->next;
        }
        merge(mergedLists->next, l1, l2);
    }
};

int main()
{
    ListNode *l1 = new ListNode(20);
    l1->next = new ListNode(30);
    l1->next->next = new ListNode(40);

    ListNode *l2 = new ListNode(20);
    l2->next = new ListNode(25);
    l2->next->next = new ListNode(39);
    l2->next->next->next = new ListNode(69);

    ListNode *result = Solution().mergeTwoLists(l1, l2);
    while (result != NULL)
    {
        cout << result->val << " ";
        result = result->next;
    }
}