#include <iostream>
#include "LinkedList.cpp"


int main()
{
	LinkedList<int> list;
	list.Push_back(2);
	list.Push_back(5);
	list.Push_back(10);
	list.Push_front(55);
	
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
	std::cout << std::endl << std::endl;

	list.Pop_front();

	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
}