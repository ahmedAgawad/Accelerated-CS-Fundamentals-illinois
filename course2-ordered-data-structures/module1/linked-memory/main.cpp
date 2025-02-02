#include "List.h"
#include <iostream>

using namespace std;

int main()
{
	List<int> list;

	const int item_a = 3;
	const int item_b = 30;

	cout << "Inserting 3 at front" << endl;
	list.insertAtFront(item_a);
	cout << "list[0]:" << list[0] << endl;

	cout << "Inserting element 30 at front..." << endl;
	list.insertAtFront(item_b);
	cout << "list[0]: " << list[0] << endl;
	cout << "list[1]: " << list[1] << endl;

	return 0;
}