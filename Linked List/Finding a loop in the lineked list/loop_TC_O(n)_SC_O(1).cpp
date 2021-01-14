#include "../SingleLinkedList.cpp"
#include <iostream>
using namespace std;

int checkForLoop(SingleLinkedList::node *temp)
{

    SingleLinkedList::node *fast = temp, *slow = temp;
    if (fast->link)
    {
        do
        {
            if (fast && fast->link)
            {
                fast = fast->link->link;
                slow = slow->link;
            }
            else
            {
                return 0;
            }
        } while (fast != slow);
        if (fast && slow)
            return 1;
        else
            return 0;
    }
}
int main()
{
    SingleLinkedList sll;
    sll.push_back(1);
    sll.push_back(2);
    sll.push_back(3);
    sll.push_back(4);
    sll.push_back(5);
    sll.insertLoop(6, 5);
    cout
        << checkForLoop(sll.head) << "\n";
}