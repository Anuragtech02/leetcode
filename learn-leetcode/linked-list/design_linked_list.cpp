#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

class MyLinkedList
{
    Node *head;

public:
    int size;
    /** Initialize your data structure here. */
    MyLinkedList()
    {
        head = nullptr;
        size = 0;
    }

    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index)
    {
        if (index >= size || !index)
            return -1;

        Node *temp = new Node();
        temp = head;

        for (int i = 0; i < index; i++)
        {
            temp = temp->next;
            i++;
        }

        return temp->value;
    }

    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val)
    {
        Node *temp = new Node();
        temp->value = val;
        temp->next = head;
        head = temp;

        //Check if the node is empty
        if (!size)
        {
            tail = temp;
        }
        ++size;
    }

    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val)
    {
        Node *temp = new Node();
        temp->value = val;
        tail->next = temp;
        tail = temp;

        //Check if the node is empty
        if (!size)
        {
            head = temp;
        }
        ++size;
    }

    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val)
    {
        if (index >= size || index < 0)
            return;
        else if (index == size - 1)
        {
            addAtTail(val);
            return;
        }
        else if (!index)
        {
            addAtHead(val);
            return;
        }

        Node *curr = new Node();
        curr = head;
        for (int i = 0; i < index - 1; i++)
        {
            curr = curr->next;
        }
        Node *temp = new Node();
        temp->value = val;
        temp->next = curr->next;
        curr->next = temp;
        ++size;
    }

    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index)
    {
        if (index >= size || index < 0)
            return;

        if (!index)
        {
            head = head->next;
            --size;
        }

        Node *curr = new Node();
        curr = head;
        for (int i = 0; i < index; i++)
        {
            curr = curr->next;
        }
        curr->next = curr->next->next;
        if (index == size - 1)
        {
            tail = curr;
            --size;
        }
    }
};

int main()
{
    // Your MyLinkedList object will be instantiated and called as such : MyLinkedList *obj = new MyLinkedList();
    // MyLinkedList *obj = new MyLinkedList();
    // int param_1 = obj->get(index);
    // obj->addAtHead(val);
    // obj->addAtTail(val);
    // obj->addAtIndex(index, val);
    // obj->deleteAtIndex(index);

    MyLinkedList *myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtIndex(1, 2); // linked list becomes 1->2->3
    cout << myLinkedList->get(1);   // return 2
    myLinkedList->deleteAtIndex(1); // now the linked list is 1->3
    cout << myLinkedList->get(1);
    cout << "Printing List:\n";
    for (int i = 0; i < myLinkedList->size; i++)
    {
        cout << "Item at index " << i << " is " << myLinkedList->get(i) << endl;
    }
    return 0;
}