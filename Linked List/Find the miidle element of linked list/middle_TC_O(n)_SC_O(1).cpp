#include "../SingleLinkedList.cpp"
#include <iostream>
using namespace std;
int findMiddle(SingleLinkedList::node *temp)
{
    SingleLinkedList::node *fast = temp, *slow = temp;
    if (fast->link)
    {
        while (fast->link)
        {
            if (fast->link->link)
            {
                fast = fast->link->link;
                slow = slow->link;
            }
            else
            {
                break;
            }
        }
    }
    return slow->data;
}
int main()
{
    SingleLinkedList sll;
    sll.push_back(1);
    sll.push_back(2);
    // sll.push_back(4);
    sll.push_back(3);
    sll.push_back(4);
    cout << findMiddle(sll.head);
}