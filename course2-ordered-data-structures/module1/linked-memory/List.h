#pragma once


template <typename T>
class List
{
public:
	const T &operator[](unsigned index);
	void insertAtFront(const T &data);

	List() : head_(nullptr) {};

	~List()
	{
		ListNode *thru = head_;

		while (thru != nullptr)
		{
			ListNode *toDelete = thru;
			thru = thru->next;

			delete toDelete;
			toDelete = nullptr;
		}
	}

private:
	class ListNode
	{
	public:
		const T &data;
		ListNode *next;
		ListNode(const T &data) : data(data), next(nullptr) {};
	};

	ListNode *head_;
	ListNode *_find(const T &data);
};

#include "List.hpp"
