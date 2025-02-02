#include "List.h"

template <typename T>
const T &List<T>::operator[](unsigned index)
{
	ListNode *thru = head_;
	while (index > 0 && thru->next != nullptr)
	{
		thru = thru->next;
		index--;
	}

	return thru->data;
}

template <typename T>
void List<T>::insertAtFront(const T &data)
{
	ListNode *newNode = new ListNode(data);

	newNode->next = head_;
	head_ = newNode;
}

template <typename T>
typename List<T>::ListNode *List<T>::_find(const T &data)
{
	ListNode *thru = head_;
	while (thru != nullptr)
	{
		if (thru->data == data)
		{
			return thru;
		}
		thru = thru->next;
	}
}