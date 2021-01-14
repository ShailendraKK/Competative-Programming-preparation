#include <iostream>
using namespace std;

class SingleLinkedList
{
public:
    struct node
    {
        int data;
        struct node *link;
    };
    struct node *head = NULL;
    int size = 0;
    bool push_front(int data)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = head;
        head = temp;
        size++;
        return true;
    }
    bool push_back(int data)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->link = NULL;
        struct node *itr = head;
        if (head)
        {
            while (itr->link)
                itr = itr->link;
            itr->link = temp;
        }
        else
            head = temp;
        size++;
        return true;
    }
    bool push_after(int data1, int data2)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data2;
        struct node *itr = head;
        while (itr->data != data1 && itr->link)
            itr = itr->link;
        temp->link = itr->link;
        itr->link = temp;
        size++;
        return true;
    }
    void print(struct node *temp)
    {
        if (temp)
        {
            cout << temp->data << " ";
            print(temp->link);
        }
    }
    void print_reverse(struct node *temp)
    {
        if (temp)
        {
            print_reverse(temp->link);
            cout << temp->data << " ";
        }
    }
    int pop_front()
    {
        struct node *temp = head;
        int data = -1;
        if (head)
        {
            data = temp->data;
            size--;
            if (head->link)
                head = head->link;
            else
                head = NULL;

            free(temp);
        }
        return data;
    }
    int pop_back()
    {
        int data = -1;
        struct node *temp = head;

        struct node *itr = head;
        if (head)
        {
            while (itr->link->link)
                itr = itr->link;
            if (itr->link)
            {
                temp = itr->link;
                data = temp->data;
                itr->link = NULL;
            }
            free(temp);
        }
        size--;
        return data;
    }
    int pop_after(int data1)
    {
        struct node *temp = NULL;
        int data;
        struct node *itr = head;
        if (head)
        {
            while (itr->data != data1 && itr->link)
                itr = itr->link;
            if (itr->link)
            {
                temp = itr->link;
                data = temp->data;
                itr->link = temp->link;
            }
            free(temp);
        }

        size--;
        return true;
    }
    void reverse()
    {
        struct node *prev = NULL, *next = NULL, *curr = head;

        while (curr)
        {
            next = curr->link;
            curr->link = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
    void reverse(struct node *prev, struct node *curr)
    {
        if (curr)
        {

            reverse(curr, curr->link);
            curr->link = prev;
        }
        else
        {
            head = prev;
        }
    }
    bool insertLoop(int data1, int data2)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data2;
        struct node *itr = head;
        while (itr->data != data1 && itr->link)
            itr = itr->link;
        temp->link = itr;
        while (itr->link)
            itr = itr->link;
        itr->link = temp;
        size++;
        return true;
    }
};
// int main()
// {
//     SingleLinkedList sll;

//     sll.push_front(2);
//     sll.push_front(1);

//     sll.push_back(4);
//     sll.push_back(5);
//     sll.push_after(2, 3);
//     sll.print(sll.head);
//     cout << "\n";
//     // cout << sll.size << "\n";
//     // sll.print_reverse(sll.head);
//     // cout << "\n";
//     // cout << " Pop back " << sll.pop_back() << "\n";
//     // sll.print(sll.head);
//     // cout << "\n";
//     // cout << " Pop frony " << sll.pop_front() << "\n";
//     // sll.print(sll.head);
//     // cout << "\n";
//     // cout << " Pop after " << sll.pop_after(2) << "\n";
//     // sll.print(sll.head);
//     cout << "Reversing LInked link \n";
//     sll.reverse();
//     sll.print(sll.head);
//     cout << "\nReversing LInked link \n";
//     sll.reverse(NULL, sll.head);
//     sll.print(sll.head);

//     return 0;
// }