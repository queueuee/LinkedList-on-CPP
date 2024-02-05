#include <iostream>
#include "LinkedList.cpp"


int main()
{
	LinkedList<int> list;
	list.Push_back(2);
	list.Push_back(5);
	list.Push_back(10);
	list.Push_back(7);
	list.Push_back(66);
	
	std::cout << "After push_back(): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl<< std::endl;

	list.Push_front(55);
	std::cout << "After push_front(): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl << std::endl;

	list.Pop_front();
	std::cout << "After pop_front(): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl << std::endl;

	list.Insert(9, 2);
	std::cout << "After Insert(9,2): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl << std::endl;
	
	list.RemoveAt(3);
	std::cout << "After RemoveAt(3): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl << std::endl;

	list.Pop_back();
	std::cout << "After Pop_back(): ";
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << "Size = " << list.GetSize() << std::endl;
}