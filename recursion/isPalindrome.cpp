#include <iostream>
#include <string>
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
    bool flag = true;

public:
    void recursivePalindromeCheck(ListNode *&head, ListNode *tail)
    {
        if (head == tail || head == tail->next)
            return;
        if (tail->next != NULL)
            recursivePalindromeCheck(head, tail->next);
        if (head->val != tail->val)
        {
            this->flag = false;
            return;
        }
        head = head->next;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return true;
        recursivePalindromeCheck(head, head->next);
        return this->flag;
    }
};

int main()
{
    ListNode *temp = new ListNode(1);
    temp->next = new ListNode(2);
    temp->next->next = new ListNode(3);
    cout << Solution().isPalindrome(temp);
    return 0;
}