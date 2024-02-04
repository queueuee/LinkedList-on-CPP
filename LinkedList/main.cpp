#include <iostream>
#include "LinkedList.cpp"


int main()
{
	LinkedList<int> list;
	list.Push_back(2);
	list.Push_back(5);
	std::cout << list.GetSize();
}