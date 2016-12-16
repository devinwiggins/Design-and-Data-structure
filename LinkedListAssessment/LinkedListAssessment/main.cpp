#include <iostream>
#include "linkedlist.h"

using namespace std;

int main()
{

	
	cout << "example of a list with no nodes: " << "\n";
	linkedListType<int> list = linkedListType<int>();
	list.initializeList();
	list.print();
	cout << "\n--------------------------------------------------------------------\n";
	cout << "after adding the node 5 to list: " << "\n";
	list.insertFirst(5);
	list.print();
	cout << "\n--------------------------------------------------------------------\n";
	cout << "deleting the node 5(being the first and only node): \n\n";
	list.deleteNode(5);
	list.print();
	cout << "\n--------------------------------------------------------------------\n";
	cout << " adding 3 nodes: 1, 3, and 5...\n";
	list.insertFirst(1);
	list.insertFirst(3);
	list.insertFirst(5);
	list.print();
	cout << "\n--------------------------------------------------------------------\n";
	cout << " all of these nodes were added through the front of the list or top\n";
	cout << " these three nodes are added through the back or bottom of the list: 9, 6, and 7\n";
	list.insertLast(9);
	list.insertLast(6);
	list.insertLast(7);
	list.print();
	cout << "\n--------------------------------------------------------------------\n";
	cout << " now i will demonstrate my destroylist function by completely destroying this list\n";
	cout << "but first i will show the first and last nodes in the list in case you forgot\n";
	cout << "\nfirst: \n";
	cout << list.front();
	cout << "\nlast: \n";
	cout << list.front() << "\n";

	cout << "now the list is destroyed: \n";
	list.destroyList();
	list.print();

	system("pause");
	return 0;
}




