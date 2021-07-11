#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
    Node *head;

public:
    int size;
    LinkedList()
    {
        this->head = NULL;
        this->size = 0;
    }

    // Inserts a node at the
    // begining of the linked list
    void insertAtStart(int num)
    {
        Node *temp = new Node();
        temp->data = num;
        if (head == NULL)
        {
            temp->next = NULL;
            head = temp;
            ++size;
            return;
        }
        temp->next = head;
        head = temp;
        ++size;
    }

    // Inserts a node at the
    // end of the linked list
    void insertAtEnd(int num)
    {
        Node *temp = new Node();
        temp->data = num;
        if (head == NULL)
        {
            this->insertAtStart(num);
            return;
        }
        Node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = NULL;
        ++size;
    }

    // Inserts node at the provided
    // index in the linked list
    int insertAtIndex(int num, int index)
    {
        if (index >= size || index < 0)
        {
            return -1;
        }
        if (index == 0)
        {
            insertAtStart(num);
            return 0;
        }
        if (index == size - 1)
        {
            insertAtEnd(num);
            return 0;
        }
        Node *temp = new Node();
        temp->data = num;
        Node *curr = head;
        for (int i = 0; i < index - 1; i++)
        {
            curr = curr->next;
        }
        temp->next = curr->next;
        curr->next = temp;
        ++size;
        return 0;
    }

    void printList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();
    list->insertAtStart(2);
    list->insertAtStart(3);
    list->insertAtStart(10);
    list->insertAtEnd(6);
    int res = list->insertAtIndex(5, 3);
    if (res == -1)
        cout << "\nIndex out of bound\n";
    list->printList();

    return 0;
}