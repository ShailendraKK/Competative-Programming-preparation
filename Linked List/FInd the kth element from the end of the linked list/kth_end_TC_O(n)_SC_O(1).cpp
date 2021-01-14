#include "../SingleLinkedList.cpp"
#include <iostream>
using namespace std;
int kth_element_end(int k, SingleLinkedList::node *temp)
{
    SingleLinkedList::node *fast = temp, *slow = temp;
    for (int i = 0; i < k && fast; i++, fast = fast->link)
    {
    }
    for (; fast; fast = fast->link, slow = slow->link)
    {
    }
    return slow->data;
}

int main()
{
    SingleLinkedList sll;
    sll.push_back(1);
    sll.push_back(2);
    sll.push_back(3);
    sll.push_back(4);
    sll.push_back(5);
    cout << kth_element_end(5, sll.head) << "\n";
    return 0;
}