#include <iostream>
#include "LinkedList.cpp"


int main()
{
	LinkedList<int> list;
	list.Push_back(2);
	list.Push_back(5);
	list.Push_back(10);
	
	for (int i = 0; i < list.GetSize(); i++)
		std::cout << list[i] << " ";
}